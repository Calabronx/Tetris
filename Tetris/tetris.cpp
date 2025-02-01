#include <cstdlib>
#include <cstdint>
#include <cstdio>
#include <cstring>

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef float f32;
typedef double f64;

#define WIDTH 10
#define HEIGHT 22
#define VISIBLE_HEIGHT 20

struct Game_State {
	u8 board[WIDTH * HEIGHT];
};

inline u8
board_get(const u8* values, s32 row, s32 col) {

}

void update_game_play()
{

}

void update_game(Game_State* game)
{
	switch (game->phase)
	{
	case GAME_PHASE_PLAY:
		return update_game_play(game);
		break;
	}
}

int main()
{
	return 0;
}