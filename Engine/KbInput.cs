namespace KYLib;

public enum KeyboardButton
{
    None = 0,
    // Control Keys
    Backspace = 259,
    Tab = 258,
    Enter = 257,
    Escape = 256,
    Space = 32,
    
    // Alphanumeric (ASCII Aligned)
    D0 = 48, D1 = 49, D2 = 50, D3 = 51, D4 = 52, 
    D5 = 53, D6 = 54, D7 = 55, D8 = 56, D9 = 57,
    
    A = 65, B = 66, C = 67, D = 68, E = 69, F = 70, 
    G = 71, H = 72, I = 73, J = 74, K = 75, L = 76, 
    M = 77, N = 78, O = 79, P = 80, Q = 81, R = 82, 
    S = 83, T = 84, U = 85, V = 86, W = 87, X = 88, 
    Y = 89, Z = 90,

    // Special Keys (Raylib Specific Offsets)
    ArrowRight = 262,
    ArrowLeft = 263,
    ArrowDown = 264,
    ArrowUp = 265,
    
    F1 = 290, F2 = 291, F3 = 292, F4 = 293, 
    F5 = 294, F6 = 295, F7 = 296, F8 = 297, 
    F9 = 298, F10 = 299, F11 = 300, F12 = 301,

    LeftShift = 340,
    LeftControl = 341,
    LeftAlt = 342,
    RightShift = 344,
    RightControl = 345,
    RightAlt = 346,
    
    ScrollLock = 281 // Raylib's Scroll Lock is actually 281
}