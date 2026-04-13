/*
 * File: playlist.h
 * Description: Variables, data types and function declaration for playlist
 */

#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Song
{
    char *title;
    char *artist;
    struct Song *p_nextSong;
} Song;

typedef struct Playlist
{
    Song *songs;
    int num_songs;
} Playlist;


Song* find_song_by_title(Playlist *playlist, const char *title);

int count_songs_recursive(const Song *current);
    

#endif /* PLAYLIST_H */