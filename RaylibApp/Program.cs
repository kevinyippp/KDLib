using ConsoleApp;
using ConsoleApp.GameComponents;
using KDLib;
using KDLib.GameObjectModel;

KDEngine.Input = new RaylibInputState();
KDEngine.AssetManager = new RaylibAssetManager();

var gameWorld = new GameWorld(1280, 720, "KDLib Raylib");
var worldRunner = new RaylibWorldRunner(gameWorld);
GameScene.Load(gameWorld);
worldRunner.Run();