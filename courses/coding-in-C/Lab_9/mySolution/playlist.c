/*
 * File: playlist.c
 * Description: Includes the code/logic for functions of playlist.h
 */

#include "playlist.h"

Song* find_song_by_title(Playlist *playlist, const char *title)
{
    if (playlist == NULL || title == NULL)
    {
        return NULL;
    }
    for (int i = 0; i < playlist->num_songs; i++)
    {
        if(strcmp(playlist->songs[i].title, title) == 0)
        {
            return &playlist->songs[i];
        }
    }
    return NULL;
}

int count_songs_recursive(const Song *current)
{
    if (current == NULL)
    {
        return 0;
    }

    return 1 + count_songs_recursive(current -> p_nextSong);
}