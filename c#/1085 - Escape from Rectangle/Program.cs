int X, Y, W, H;

string input = Console.ReadLine();

string[] space = input.Split(' ');

X = Int32.Parse(space[0]);
Y = Int32.Parse(space[1]);
W = Int32.Parse(space[2]);
H = Int32.Parse(space[3]);

if (X <= Y) // X가 더 작거나 같을 때
{
  if(X < W - X) Console.WriteLine(X < H - Y ? X : H - Y);
  else if(X > W - X) Console.WriteLine(W - X < H - Y ? W - X : H - Y);
  else if(X == W - X) Console.WriteLine(X < H - Y ? X : H - Y);
}
else if (X > Y) // Y가 더 작을 때
{
  if(Y < H - Y) Console.WriteLine(Y < W - X ? Y : W - X);
  else if(Y > H - Y) Console.WriteLine(H - Y < W - X ? H - Y : W - X);
  else if(Y == H - Y) Console.WriteLine(Y < W - X ? Y : W - X);
}
