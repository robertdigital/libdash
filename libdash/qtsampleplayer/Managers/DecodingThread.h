/*
 * DecodingThread.h
 *****************************************************************************
 * Copyright (C) 2013, bitmovin Softwareentwicklung OG, All Rights Reserved
 *
 * Email: libdash-dev@vicky.bitmovin.net
 *
 * This source code and its use and distribution, is subject to the terms
 * and conditions of the applicable license agreement.
 *****************************************************************************/

#ifndef QTSAMPLEPLAYER_MANAGERS_DECODINGTHREAD_H_
#define QTSAMPLEPLAYER_MANAGERS_DECODINGTHREAD_H_

#include "../libdashframework/Input/IDataReceiver.h"
#include "../Renderer/IAudioObserver.h"
#include "../Renderer/IVideoObserver.h"

namespace sampleplayer
{
    namespace managers
    {
        class DecodingThread
        {
            public:
                DecodingThread          (libdash::framework::input::IDataReceiver *receiver, renderer::IAudioObserver *audioObserver, renderer::IVideoObserver *videoObserver);
                virtual ~DecodingThread ();

                bool Start  ();
                bool Stop   ();

            private:
        };
    }
}

#endif /* QTSAMPLEPLAYER_MANAGERS_DECODINGTHREAD_H_ */