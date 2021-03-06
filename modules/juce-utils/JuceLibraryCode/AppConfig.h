/*

    IMPORTANT! This file is auto-generated each time you save your
    project - if you alter its contents, your changes may be overwritten!

    There's a section below where you can add your own custom code safely, and the
    Projucer will preserve the contents of that block, but the best way to change
    any of these definitions is by using the Projucer's project settings.

    Any commented-out settings will assume their default values.

*/

#pragma once

/*
  ==============================================================================

   In accordance with the terms of the JUCE 5 End-Use License Agreement, the
   JUCE Code in SECTION A cannot be removed, changed or otherwise rendered
   ineffective unless you have a JUCE Indie or Pro license, or are using JUCE
   under the GPL v3 license.

   End User License Agreement: www.juce.com/juce-5-licence
  ==============================================================================
*/

// BEGIN SECTION A

#define JUCE_DISPLAY_SPLASH_SCREEN 0
#define JUCE_REPORT_APP_USAGE 0

// END SECTION A

#define JUCE_USE_DARK_SPLASH_SCREEN 1

//==============================================================================
#define JUCE_MODULE_AVAILABLE_juce_core	1
#define JUCE_MODULE_AVAILABLE_juce_events	1
#define JUCE_MODULE_AVAILABLE_juce_audio_basics	1
#define JUCE_MODULE_AVAILABLE_juce_audio_devices	1
#define JUCE_MODULE_AVAILABLE_juce_data_structures	1


//==============================================================================
#ifndef    JUCE_STANDALONE_APPLICATION
 #if defined(JucePlugin_Name) && defined(JucePlugin_Build_Standalone)
  #define  JUCE_STANDALONE_APPLICATION JucePlugin_Build_Standalone
 #else
  #define  JUCE_STANDALONE_APPLICATION 1
 #endif
#endif

#define JUCE_GLOBAL_MODULE_SETTINGS_INCLUDED 1

//==============================================================================
// juce_core flags:

#ifndef    JUCE_FORCE_DEBUG
  // #define JUCE_FORCE_DEBUG
#endif

#ifndef    JUCE_LOG_ASSERTIONS
  // #define JUCE_LOG_ASSERTIONS
#endif

#ifndef    JUCE_CHECK_MEMORY_LEAKS
  // #define JUCE_CHECK_MEMORY_LEAKS
#endif

#ifndef    JUCE_INCLUDE_ZLIB_CODE
  // #define JUCE_INCLUDE_ZLIB_CODE
#endif

#ifndef    JUCE_USE_CURL
  // #define JUCE_USE_CURL
#endif

#ifndef    JUCE_LOAD_CURL_SYMBOLS_LAZILY
  // #define JUCE_LOAD_CURL_SYMBOLS_LAZILY
#endif

#ifndef    JUCE_CATCH_UNHANDLED_EXCEPTIONS
  // #define JUCE_CATCH_UNHANDLED_EXCEPTIONS
#endif

#ifndef    JUCE_ALLOW_STATIC_NULL_VARIABLES
  // #define JUCE_ALLOW_STATIC_NULL_VARIABLES
#endif

#ifndef    JUCE_STRICT_REFCOUNTEDPOINTER
  // #define JUCE_STRICT_REFCOUNTEDPOINTER
#endif

//==============================================================================
// juce_events flags:

#ifndef    JUCE_EXECUTE_APP_SUSPEND_ON_IOS_BACKGROUND_TASK
  // #define JUCE_EXECUTE_APP_SUSPEND_ON_IOS_BACKGROUND_TASK
#endif

//==============================================================================
// juce_audio_devices flags:

#ifndef    JUCE_USE_WINRT_MIDI
  // #define JUCE_USE_WINRT_MIDI
#endif

#ifndef    JUCE_ASIO
  // #define JUCE_ASIO
#endif

#ifndef    JUCE_WASAPI
  // #define JUCE_WASAPI
#endif

#ifndef    JUCE_WASAPI_EXCLUSIVE
  // #define JUCE_WASAPI_EXCLUSIVE
#endif

#ifndef    JUCE_DIRECTSOUND
  // #define JUCE_DIRECTSOUND
#endif

#ifndef    JUCE_ALSA
  // #define JUCE_ALSA
#endif

#ifndef    JUCE_JACK
  // #define JUCE_JACK
#endif

#ifndef    JUCE_BELA
  // #define JUCE_BELA
#endif

#ifndef    JUCE_USE_ANDROID_OBOE
  // #define JUCE_USE_ANDROID_OBOE
#endif

#ifndef    JUCE_USE_ANDROID_OPENSLES
  // #define JUCE_USE_ANDROID_OPENSLES
#endif

#ifndef    JUCE_DISABLE_AUDIO_MIXING_WITH_OTHER_APPS
  // #define JUCE_DISABLE_AUDIO_MIXING_WITH_OTHER_APPS
#endif



#ifndef  JucePlugin_VSTUniqueID
 #define JucePlugin_VSTUniqueID            JucePlugin_PluginCode
#endif


