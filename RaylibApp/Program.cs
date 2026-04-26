using ConsoleApp;
using ConsoleApp.GameComponents;
using KYLib;
using KYLib.GameObjectModel;

KDEngine.Input = new RaylibInputState();
var gameWorld = new GameWorld(1280, 720, "KYLib Raylib");

GameScene.Load(gameWorld);

var worldRunner = new RaylibWorldRunner(gameWorld);
worldRunner.Run();