using System.Numerics;

namespace KDLib.GameObjectModel.GameComponents;

public class SnakeComponent : GameComponent
{
    private const float SPACING = 40f;
    private const float MIN_RECORD_DIST = 5f;
    private readonly List<GameObject> _segments = [];

    // LinkedList allows O(1) AddFirst / RemoveLast instead of O(m) Insert(0,...)
    private readonly LinkedList<Vector2> _trail = new();


    public void AddSegment(GameObject gameObject)
    {
        if (_segments.Count == 0 && _trail.Count == 0)
            _trail.AddFirst(gameObject.Position);

        if (_segments.Count > 0)
            gameObject.Position = _segments[^1].Position;

        _segments.Add(gameObject);
    }

    public override void OnAdded()
    {
        AddSegment(this.GameObject);
    }

    public override void Update(double dt)
    {
        if (_segments.Count < 2) return;

        UpdateTrail();
        UpdateSegmentPositions();
    }

    private void UpdateTrail()
    {
        var headPos = _segments[0].Position;

        // O(1) — LinkedList.First is a direct pointer, no scan
        if (Vector2.Distance(_trail.First!.Value, headPos) > MIN_RECORD_DIST)
            _trail.AddFirst(headPos);   // O(1) instead of O(m) Insert(0,...)

        // Trim excess points from the tail — each RemoveLast is O(1)
        int maxPoints = (int)((_segments.Count * SPACING) / MIN_RECORD_DIST) + 2;
        while (_trail.Count > maxPoints)
            _trail.RemoveLast();        // O(1) instead of RemoveRange
    }

    // Single pass O(n + m) instead of O(n * m)
    private void UpdateSegmentPositions()
    {
        int segIndex = 1;
        float targetDist = SPACING;   // distance along trail for segment[segIndex]
        float accumulated = 0f;

        var node = _trail.First;

        while (node?.Next is { } nextNode && segIndex < _segments.Count)
        {
            float step = Vector2.Distance(node.Value, nextNode.Value);

            // One trail segment can contain multiple snake segments — handle with while
            while (segIndex < _segments.Count && accumulated + step >= targetDist)
            {
                float ratio = (targetDist - accumulated) / step;
                _segments[segIndex].Position = Vector2.Lerp(node.Value, nextNode.Value, ratio);
                segIndex++;
                targetDist = segIndex * SPACING;  // next target
            }

            accumulated += step;
            node = nextNode;
        }
    }
}