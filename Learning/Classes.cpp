class Player {
public:
	int x, y;
	int speed;

	void Move(int xa, int ya) {
		x += xa * speed;
		y += ya * speed;
	}
};

int main() {
	Player player;
	player.x = 0;
	player.y = 0;
	player.speed = 1;
	player.Move(1, 1);
}