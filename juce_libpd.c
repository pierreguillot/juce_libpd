/*
 // Copyright (c) 2015-2018 Pierre Guillot.
 // For information on usage and redistribution, and for a DISCLAIMER OF ALL
 // WARRANTIES, see the file, "LICENSE.txt," in this distribution.
*/

#ifdef JUCE_LIBPD_H_INCLUDED
 /* When you add this cpp file to your project, you mustn't include it in a file where you've
    already included any other headers - just put it inside a file on its own, possibly with your config
    flags preceding it, but don't include anything else. That also includes avoiding any automatic prefix
    header files that the compiler may be using.
 */
 #error "Incorrect use of JUCE cpp file"
#endif

#include "juce_libpd.h"

#ifdef __cplusplus
extern "C"
{
#endif

//==============================================================================
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wcomma"
#elif defined (__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#elif defined (_MSC_VER)
#pragma warning (push)
#pragma warning (disable: 4091 4100 4996 )
#endif

//==============================================================================
#include "libpd/pure-data/src/g_array.c"
#include "libpd/pure-data/src/g_canvas.c"
#include "libpd/pure-data/src/g_clone.c"
#include "libpd/pure-data/src/g_editor.c"
#include "libpd/pure-data/src/g_graph.c"
#include "libpd/pure-data/src/g_guiconnect.c"
#include "libpd/pure-data/src/g_io.c"
#include "libpd/pure-data/src/g_mycanvas.c"
#include "libpd/pure-data/src/g_numbox.c"
#include "libpd/pure-data/src/g_readwrite.c"
#include "libpd/pure-data/src/g_rtext.c"
#include "libpd/pure-data/src/g_scalar.c"
#include "libpd/pure-data/src/g_template.c"
#include "libpd/pure-data/src/g_text.c"
#include "libpd/pure-data/src/g_toggle.c"
#include "libpd/pure-data/src/g_traversal.c"
#include "libpd/pure-data/src/g_vdial.c"
#include "libpd/pure-data/src/g_vslider.c"
#include "libpd/pure-data/src/g_vumeter.c"
#include "libpd/pure-data/src/m_atom.c"
#include "libpd/pure-data/src/m_binbuf.c"
#include "libpd/pure-data/src/m_class.c"
#include "libpd/pure-data/src/m_conf.c"
#include "libpd/pure-data/src/m_glob.c"
#include "libpd/pure-data/src/m_memory.c"
#include "libpd/pure-data/src/m_obj.c"
#include "libpd/pure-data/src/m_pd.c"
#include "libpd/pure-data/src/m_sched.c"
#include "libpd/pure-data/src/s_audio.c"
#include "libpd/pure-data/src/s_audio_dummy.c"
#include "libpd/pure-data/src/s_inter.c"
#include "libpd/pure-data/src/s_loader.c"
#include "libpd/pure-data/src/s_main.c"
#include "libpd/pure-data/src/s_path.c"
#include "libpd/pure-data/src/s_print.c"
#include "libpd/pure-data/src/s_utf8.c"
#include "libpd/pure-data/src/x_acoustics.c"
#include "libpd/pure-data/src/x_arithmetic.c"
#include "libpd/pure-data/src/x_array.c"
#include "libpd/pure-data/src/x_connective.c"
#include "libpd/pure-data/src/x_gui.c"
#include "libpd/pure-data/src/x_interface.c"
#include "libpd/pure-data/src/x_list.c"
#include "libpd/pure-data/src/x_midi.c"
#include "libpd/pure-data/src/x_misc.c"
#include "libpd/pure-data/src/x_net.c"
#include "libpd/pure-data/src/x_scalar.c"
#include "libpd/pure-data/src/x_text.c"
#include "libpd/pure-data/src/x_time.c"
#include "libpd/pure-data/src/x_vexp.c"
#include "libpd/pure-data/src/x_vexp_fun.c"
#include "libpd/pure-data/src/x_vexp_if.c"

//==============================================================================
#if JUCE_LIBPD_EXTRA
#include "libpd/pure-data/extra/bob~/bob~.c"
#include "libpd/pure-data/extra/bonk~/bonk~.c"
#include "libpd/pure-data/extra/choice/choice.c"
#include "libpd/pure-data/extra/fiddle~/fiddle~.c"
#include "libpd/pure-data/extra/loop~/loop~.c"
#include "libpd/pure-data/extra/lrshift~/lrshift~.c"
#include "libpd/pure-data/extra/pique/pique.c"
#include "libpd/pure-data/extra/sigmund~/sigmund~.c"
#include "libpd/pure-data/extra/stdout/stdout.c"

#endif

//==============================================================================
#include "libpd/libpd_wrapper/s_libpdmidi.c"
#include "libpd/libpd_wrapper/x_libpdreceive.c"
#include "libpd/libpd_wrapper/z_hooks.c"
#include "libpd/libpd_wrapper/z_libpd.c"

//==============================================================================
#if JUCE_LIBPD_UTILS
#include "libpd/libpd_wrapper/util/ringbuffer.c"
#include "libpd/libpd_wrapper/util/z_print_util.c"
#include "libpd/libpd_wrapper/util/z_queued.c"

#endif

#ifdef __clang__
#pragma clang diagnostic pop
#elif defined (__GNUC__)
#pragma GCC diagnostic pop
#elif defined (_MSC_VER)
#pragma warning (pop)
#endif
    
#ifdef __cplusplus
}
#endif
