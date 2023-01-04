#if !defined(HANDMADE_H)
/*============
$File :$
$Date: $
$Revision: $
$Creator: Taryn Bates $
$Notice: Hey sexy. $
=============*/

/*
    TODO(casey): Services that the platform layer provides to the game
*/

/*
    NOTE(casey): Sercies that the game provides to the platform layer.
    (expand in the future - sound on separate thread, etc.)
*/

// timing, controller/keyoard input, bitmap buffer, sound buffer

// rendering will become a three-tiered abstraction
struct game_offscreen_buffer
{
    void *Memory;
    int Width;
    int Height;
    int Pitch;
};
internal void GameUpdateAndRender(game_offscreen_buffer *Buffer, int BlueOffset, int GreenOffset);

#define HANDMADE_H
#endif
