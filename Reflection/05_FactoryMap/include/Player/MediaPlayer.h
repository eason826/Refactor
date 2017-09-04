#ifndef MEDIAPLAYER_H__
#define MEDIAPLAYER_H__
#define MaxFactories 10

#include <string.h>
#include <stdio.h>

class MediaPlayer;
typedef MediaPlayer* (*Factory)();

typedef struct PlayerFactory_T
{
	const char* PlayerType;
	Factory factory;
}PlayerFactory;

class MediaPlayer
{
public:
	MediaPlayer();
	virtual ~MediaPlayer();

	static PlayerFactory* GetFactories();
	static void RegisterPlayer(const char* PlayerType,Factory factory);
	static MediaPlayer* CreatePlayer(const char* PlayerType);
};

#define REGISTER(className)						\
    MediaPlayer* className::factory(){                              	\
        return new className;                                           \
    }                                                                   \
    void className::Register(){						\
        RegisterPlayer(#className, factory);				\
    }


#endif

