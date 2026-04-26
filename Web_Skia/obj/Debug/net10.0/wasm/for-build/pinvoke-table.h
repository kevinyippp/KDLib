// GENERATED FILE, DO NOT MODIFY (PInvokeTableGenerator.cs)
#include <mono/utils/details/mono-error-types.h>
#include <mono/metadata/assembly.h>
#include <mono/utils/mono-error.h>
#include <mono/metadata/object.h>
#include <mono/utils/details/mono-logger-types.h>
#include "runtime.h"
#include "pinvoke.h"

uint32_t CompressionNative_Crc32 (uint32_t, void *, int32_t);

int32_t CompressionNative_Deflate (void *, int32_t);

int32_t CompressionNative_DeflateEnd (void *);

int32_t CompressionNative_DeflateInit2_ (void *, int32_t, int32_t, int32_t, int32_t, int32_t);

int32_t CompressionNative_Inflate (void *, int32_t);

int32_t CompressionNative_InflateEnd (void *);

int32_t CompressionNative_InflateInit2_ (void *, int32_t);

int32_t CompressionNative_InflateReset2_ (void *, int32_t);

void GlobalizationNative_ChangeCase (void *, int32_t, void *, int32_t, int32_t);

void GlobalizationNative_ChangeCaseInvariant (void *, int32_t, void *, int32_t, int32_t);

void GlobalizationNative_ChangeCaseTurkish (void *, int32_t, void *, int32_t, int32_t);

void GlobalizationNative_CloseSortHandle (void *);

int32_t GlobalizationNative_CompareString (void *, void *, int32_t, void *, int32_t, int32_t);

int32_t GlobalizationNative_EndsWith (void *, void *, int32_t, void *, int32_t, int32_t, void *);

int32_t GlobalizationNative_EnumCalendarInfo (void *, void *, uint32_t, int32_t, void *);

int32_t GlobalizationNative_GetCalendarInfo (void *, uint32_t, int32_t, void *, int32_t);

int32_t GlobalizationNative_GetCalendars (void *, void *, int32_t);

int32_t GlobalizationNative_GetDefaultLocaleName (void *, int32_t);

int32_t GlobalizationNative_GetICUVersion ();

int32_t GlobalizationNative_GetJapaneseEraStartDate (int32_t, void *, void *, void *);

int32_t GlobalizationNative_GetLatestJapaneseEra ();

int32_t GlobalizationNative_GetLocaleInfoGroupingSizes (void *, uint32_t, void *, void *);

int32_t GlobalizationNative_GetLocaleInfoInt (void *, uint32_t, void *);

int32_t GlobalizationNative_GetLocaleInfoString (void *, uint32_t, void *, int32_t, void *);

int32_t GlobalizationNative_GetLocaleName (void *, void *, int32_t);

int32_t GlobalizationNative_GetLocaleTimeFormat (void *, int32_t, void *, int32_t);

int32_t GlobalizationNative_GetLocales (void *, int32_t);

int32_t GlobalizationNative_GetSortHandle (void *, void *);

int32_t GlobalizationNative_GetSortKey (void *, void *, int32_t, void *, int32_t, int32_t);

int32_t GlobalizationNative_GetSortVersion (void *);

int32_t GlobalizationNative_IndexOf (void *, void *, int32_t, void *, int32_t, int32_t, void *);

void GlobalizationNative_InitICUFunctions (void *, void *, void *, void *);

void GlobalizationNative_InitOrdinalCasingPage (int32_t, void *);

int32_t GlobalizationNative_IsNormalized (int32_t, void *, int32_t);

int32_t GlobalizationNative_IsPredefinedLocale (void *);

int32_t GlobalizationNative_LastIndexOf (void *, void *, int32_t, void *, int32_t, int32_t, void *);

int32_t GlobalizationNative_LoadICU ();

int32_t GlobalizationNative_NormalizeString (int32_t, void *, int32_t, void *, int32_t);

int32_t GlobalizationNative_StartsWith (void *, void *, int32_t, void *, int32_t, int32_t, void *);

int32_t GlobalizationNative_ToAscii (uint32_t, void *, int32_t, void *, int32_t);

int32_t GlobalizationNative_ToUnicode (uint32_t, void *, int32_t, void *, int32_t);

void InterceptBrowserObjects ();

int32_t SystemNative_Access (void *, int32_t);

void * SystemNative_AlignedAlloc (void *, void *);

void SystemNative_AlignedFree (void *);

void * SystemNative_AlignedRealloc (void *, void *, void *);

void * SystemNative_Calloc (void *, void *);

int32_t SystemNative_CanGetHiddenFlag ();

int32_t SystemNative_ChDir (void *);

int32_t SystemNative_ChMod (void *, int32_t);

int32_t SystemNative_Close (void *);

int32_t SystemNative_CloseDir (void *);

int32_t SystemNative_ConvertErrorPalToPlatform (int32_t);

int32_t SystemNative_ConvertErrorPlatformToPal (int32_t);

int32_t SystemNative_CopyFile (void *, void *, int64_t);

void * SystemNative_Dup (void *);

int32_t SystemNative_FAllocate (void *, int64_t, int64_t);

int32_t SystemNative_FChMod (void *, int32_t);

int32_t SystemNative_FChflags (void *, uint32_t);

int32_t SystemNative_FLock (void *, int32_t);

int32_t SystemNative_FStat (void *, void *);

int32_t SystemNative_FSync (void *);

int32_t SystemNative_FTruncate (void *, int64_t);

int32_t SystemNative_FUTimens (void *, void *);

int32_t SystemNative_FcntlSetFD (void *, int32_t);

void SystemNative_Free (void *);

void SystemNative_FreeEnviron (void *);

int32_t SystemNative_GetAddressFamily (void *, int32_t, void *);

double SystemNative_GetCpuUtilization (void *);

int32_t SystemNative_GetCryptographicallySecureRandomBytes (void *, int32_t);

void * SystemNative_GetCwd (void *, int32_t);

void * SystemNative_GetDefaultSearchOrderPseudoHandle ();

void * SystemNative_GetEnv (void *);

void * SystemNative_GetEnviron ();

int32_t SystemNative_GetErrNo ();

uint32_t SystemNative_GetFileSystemType (void *);

int32_t SystemNative_GetIPv4Address (void *, int32_t, void *);

int32_t SystemNative_GetIPv6Address (void *, int32_t, void *, int32_t, void *);

int64_t SystemNative_GetLowResolutionTimestamp ();

void SystemNative_GetNonCryptographicallySecureRandomBytes (void *, int32_t);

int32_t SystemNative_GetPort (void *, int32_t, void *);

int32_t SystemNative_GetSocketAddressSizes (void *, void *, void *, void *);

int64_t SystemNative_GetSystemTimeAsTicks ();

void * SystemNative_GetTimeZoneData (void *, void *);

int64_t SystemNative_GetTimestamp ();

int32_t SystemNative_IsMemfdSupported ();

int32_t SystemNative_LChflags (void *, uint32_t);

int32_t SystemNative_LChflagsCanSetHiddenFlag ();

int64_t SystemNative_LSeek (void *, int64_t, int32_t);

int32_t SystemNative_LStat (void *, void *);

int32_t SystemNative_Link (void *, void *);

int32_t SystemNative_LockFileRegion (void *, int64_t, int64_t, int32_t);

void SystemNative_Log (void *, int32_t);

void SystemNative_LogError (void *, int32_t);

void SystemNative_LowLevelMonitor_Acquire (void *);

void * SystemNative_LowLevelMonitor_Create ();

void SystemNative_LowLevelMonitor_Destroy (void *);

void SystemNative_LowLevelMonitor_Release (void *);

void SystemNative_LowLevelMonitor_Signal_Release (void *);

int32_t SystemNative_LowLevelMonitor_TimedWait (void *, int32_t);

void SystemNative_LowLevelMonitor_Wait (void *);

int32_t SystemNative_MAdvise (void *, uint64_t, int32_t);

void * SystemNative_MMap (void *, uint64_t, int32_t, int32_t, void *, int64_t);

int32_t SystemNative_MSync (void *, uint64_t, int32_t);

int32_t SystemNative_MUnmap (void *, uint64_t);

void * SystemNative_Malloc (void *);

void * SystemNative_MemfdCreate (void *, int32_t);

int32_t SystemNative_MkDir (void *, int32_t);

void * SystemNative_MkdTemp (void *);

void * SystemNative_MksTemps (void *, int32_t);

void * SystemNative_Open (void *, int32_t, int32_t);

void * SystemNative_OpenDir (void *);

int32_t SystemNative_PRead (void *, void *, int32_t, int64_t);

int64_t SystemNative_PReadV (void *, void *, int32_t, int64_t);

int32_t SystemNative_PWrite (void *, void *, int32_t, int64_t);

int64_t SystemNative_PWriteV (void *, void *, int32_t, int64_t);

int32_t SystemNative_PosixFAdvise (void *, int64_t, int64_t, int32_t);

int32_t SystemNative_Read (void *, void *, int32_t);

int32_t SystemNative_ReadDir (void *, void *);

int32_t SystemNative_ReadLink (void *, void *, int32_t);

void * SystemNative_Realloc (void *, void *);

int32_t SystemNative_Rename (void *, void *);

int32_t SystemNative_RmDir (void *);

int32_t SystemNative_SchedGetCpu ();

int32_t SystemNative_SetAddressFamily (void *, int32_t, int32_t);

void SystemNative_SetErrNo (int32_t);

int32_t SystemNative_SetIPv4Address (void *, int32_t, uint32_t);

int32_t SystemNative_SetIPv6Address (void *, int32_t, void *, int32_t, uint32_t);

int32_t SystemNative_SetPort (void *, int32_t, uint32_t);

void * SystemNative_ShmOpen (void *, int32_t, int32_t);

int32_t SystemNative_ShmUnlink (void *);

int32_t SystemNative_Stat (void *, void *);

void * SystemNative_StrErrorR (int32_t, void *, int32_t);

int32_t SystemNative_SymLink (void *, void *);

int64_t SystemNative_SysConf (int32_t);

void SystemNative_SysLog (int32_t, void *, void *);

uint32_t SystemNative_TryGetUInt32OSThreadId ();

int32_t SystemNative_UTimensat (void *, void *);

int32_t SystemNative_Unlink (void *);

int32_t SystemNative_Write (void *, void *, int32_t);

void gr_backendrendertarget_delete (void *);

int32_t gr_backendrendertarget_get_backend (void *);

int32_t gr_backendrendertarget_get_gl_framebufferinfo (void *, void *);

int32_t gr_backendrendertarget_get_height (void *);

int32_t gr_backendrendertarget_get_samples (void *);

int32_t gr_backendrendertarget_get_stencils (void *);

int32_t gr_backendrendertarget_get_width (void *);

int32_t gr_backendrendertarget_is_valid (void *);

void * gr_backendrendertarget_new_direct3d (int32_t, int32_t, void *);

void * gr_backendrendertarget_new_gl (int32_t, int32_t, int32_t, int32_t, void *);

void * gr_backendrendertarget_new_metal (int32_t, int32_t, void *);

void * gr_backendrendertarget_new_vulkan (int32_t, int32_t, void *);

void gr_backendtexture_delete (void *);

int32_t gr_backendtexture_get_backend (void *);

int32_t gr_backendtexture_get_gl_textureinfo (void *, void *);

int32_t gr_backendtexture_get_height (void *);

int32_t gr_backendtexture_get_width (void *);

int32_t gr_backendtexture_has_mipmaps (void *);

int32_t gr_backendtexture_is_valid (void *);

void * gr_backendtexture_new_direct3d (int32_t, int32_t, void *);

void * gr_backendtexture_new_gl (int32_t, int32_t, int32_t, void *);

void * gr_backendtexture_new_metal (int32_t, int32_t, int32_t, void *);

void * gr_backendtexture_new_vulkan (int32_t, int32_t, void *);

void gr_direct_context_abandon_context (void *);

void gr_direct_context_dump_memory_statistics (void *, void *);

void gr_direct_context_flush (void *);

void gr_direct_context_flush_and_submit (void *, int32_t);

void gr_direct_context_flush_image (void *, void *);

void gr_direct_context_flush_surface (void *, void *);

void gr_direct_context_free_gpu_resources (void *);

void * gr_direct_context_get_resource_cache_limit (void *);

void gr_direct_context_get_resource_cache_usage (void *, void *, void *);

int32_t gr_direct_context_is_abandoned (void *);

void * gr_direct_context_make_direct3d (void *);

void * gr_direct_context_make_direct3d_with_options (void *, void *);

void * gr_direct_context_make_gl (void *);

void * gr_direct_context_make_gl_with_options (void *, void *);

void * gr_direct_context_make_metal (void *, void *);

void * gr_direct_context_make_metal_with_options (void *, void *, void *);

void * gr_direct_context_make_vulkan (void *);

void * gr_direct_context_make_vulkan_with_options (void *, void *);

void gr_direct_context_perform_deferred_cleanup (void *, int64_t);

void gr_direct_context_purge_unlocked_resources (void *, int32_t);

void gr_direct_context_purge_unlocked_resources_bytes (void *, void *, int32_t);

void gr_direct_context_release_resources_and_abandon_context (void *);

void gr_direct_context_reset_context (void *, uint32_t);

void gr_direct_context_set_resource_cache_limit (void *, void *);

int32_t gr_direct_context_submit (void *, int32_t);

void * gr_glinterface_assemble_gl_interface (void *, void *);

void * gr_glinterface_assemble_gles_interface (void *, void *);

void * gr_glinterface_assemble_interface (void *, void *);

void * gr_glinterface_assemble_webgl_interface (void *, void *);

void * gr_glinterface_create_native_interface ();

int32_t gr_glinterface_has_extension (void *, void *);

void gr_glinterface_unref (void *);

int32_t gr_glinterface_validate (void *);

int32_t gr_recording_context_get_backend (void *);

void * gr_recording_context_get_direct_context (void *);

int32_t gr_recording_context_get_max_surface_sample_count_for_color_type (void *, int32_t);

int32_t gr_recording_context_is_abandoned (void *);

int32_t gr_recording_context_max_render_target_size (void *);

int32_t gr_recording_context_max_texture_size (void *);

void gr_recording_context_unref (void *);

void gr_vk_extensions_delete (void *);

int32_t gr_vk_extensions_has_extension (void *, void *, uint32_t);

void gr_vk_extensions_init (void *, void *, void *, void *, void *, uint32_t, void *, uint32_t, void *);

void * gr_vk_extensions_new ();

void sk_bitmap_destructor (void *);

void sk_bitmap_erase (void *, uint32_t);

void sk_bitmap_erase_rect (void *, uint32_t, void *);

int32_t sk_bitmap_extract_alpha (void *, void *, void *, void *);

int32_t sk_bitmap_extract_subset (void *, void *, void *);

void * sk_bitmap_get_addr (void *, int32_t, int32_t);

void * sk_bitmap_get_addr_16 (void *, int32_t, int32_t);

void * sk_bitmap_get_addr_32 (void *, int32_t, int32_t);

void * sk_bitmap_get_addr_8 (void *, int32_t, int32_t);

void * sk_bitmap_get_byte_count (void *);

void sk_bitmap_get_info (void *, void *);

uint32_t sk_bitmap_get_pixel_color (void *, int32_t, int32_t);

void sk_bitmap_get_pixel_colors (void *, void *);

void * sk_bitmap_get_pixels (void *, void *);

void * sk_bitmap_get_row_bytes (void *);

int32_t sk_bitmap_install_pixels (void *, void *, void *, void *, void *, void *);

int32_t sk_bitmap_install_pixels_with_pixmap (void *, void *);

int32_t sk_bitmap_is_immutable (void *);

int32_t sk_bitmap_is_null (void *);

void * sk_bitmap_make_shader (void *, int32_t, int32_t, void *, void *);

void * sk_bitmap_new ();

void sk_bitmap_notify_pixels_changed (void *);

int32_t sk_bitmap_peek_pixels (void *, void *);

int32_t sk_bitmap_ready_to_draw (void *);

void sk_bitmap_reset (void *);

void sk_bitmap_set_immutable (void *);

void sk_bitmap_set_pixels (void *, void *);

void sk_bitmap_swap (void *, void *);

int32_t sk_bitmap_try_alloc_pixels (void *, void *, void *);

int32_t sk_bitmap_try_alloc_pixels_with_flags (void *, void *, uint32_t);

void * sk_blender_new_arithmetic (float, float, float, float, int32_t);

void * sk_blender_new_mode (int32_t);

void sk_blender_ref (void *);

void sk_blender_unref (void *);

void sk_canvas_clear (void *, uint32_t);

void sk_canvas_clear_color4f (void *, void *);

void sk_canvas_clip_path_with_operation (void *, void *, int32_t, int32_t);

void sk_canvas_clip_rect_with_operation (void *, void *, int32_t, int32_t);

void sk_canvas_clip_region (void *, void *, int32_t);

void sk_canvas_clip_rrect_with_operation (void *, void *, int32_t, int32_t);

void sk_canvas_concat (void *, void *);

void sk_canvas_destroy (void *);

void sk_canvas_discard (void *);

void sk_canvas_draw_annotation (void *, void *, void *, void *);

void sk_canvas_draw_arc (void *, void *, float, float, int32_t, void *);

void sk_canvas_draw_atlas (void *, void *, void *, void *, void *, int32_t, int32_t, void *, void *, void *);

void sk_canvas_draw_circle (void *, float, float, float, void *);

void sk_canvas_draw_color (void *, uint32_t, int32_t);

void sk_canvas_draw_color4f (void *, void *, int32_t);

void sk_canvas_draw_drawable (void *, void *, void *);

void sk_canvas_draw_drrect (void *, void *, void *, void *);

void sk_canvas_draw_image (void *, void *, float, float, void *, void *);

void sk_canvas_draw_image_lattice (void *, void *, void *, void *, int32_t, void *);

void sk_canvas_draw_image_nine (void *, void *, void *, void *, int32_t, void *);

void sk_canvas_draw_image_rect (void *, void *, void *, void *, void *, void *);

void sk_canvas_draw_line (void *, float, float, float, float, void *);

void sk_canvas_draw_link_destination_annotation (void *, void *, void *);

void sk_canvas_draw_named_destination_annotation (void *, void *, void *);

void sk_canvas_draw_oval (void *, void *, void *);

void sk_canvas_draw_paint (void *, void *);

void sk_canvas_draw_patch (void *, void *, void *, void *, int32_t, void *);

void sk_canvas_draw_path (void *, void *, void *);

void sk_canvas_draw_picture (void *, void *, void *, void *);

void sk_canvas_draw_point (void *, float, float, void *);

void sk_canvas_draw_points (void *, int32_t, void *, void *, void *);

void sk_canvas_draw_rect (void *, void *, void *);

void sk_canvas_draw_region (void *, void *, void *);

void sk_canvas_draw_round_rect (void *, void *, float, float, void *);

void sk_canvas_draw_rrect (void *, void *, void *);

void sk_canvas_draw_simple_text (void *, void *, void *, int32_t, float, float, void *, void *);

void sk_canvas_draw_text_blob (void *, void *, float, float, void *);

void sk_canvas_draw_url_annotation (void *, void *, void *);

void sk_canvas_draw_vertices (void *, void *, int32_t, void *);

int32_t sk_canvas_get_device_clip_bounds (void *, void *);

int32_t sk_canvas_get_local_clip_bounds (void *, void *);

void sk_canvas_get_matrix (void *, void *);

int32_t sk_canvas_get_save_count (void *);

int32_t sk_canvas_is_clip_empty (void *);

int32_t sk_canvas_is_clip_rect (void *);

void * sk_canvas_new_from_bitmap (void *);

void * sk_canvas_new_from_raster (void *, void *, void *, void *);

int32_t sk_canvas_quick_reject (void *, void *);

void sk_canvas_reset_matrix (void *);

void sk_canvas_restore (void *);

void sk_canvas_restore_to_count (void *, int32_t);

void sk_canvas_rotate_degrees (void *, float);

void sk_canvas_rotate_radians (void *, float);

int32_t sk_canvas_save (void *);

int32_t sk_canvas_save_layer (void *, void *, void *);

int32_t sk_canvas_save_layer_rec (void *, void *);

void sk_canvas_scale (void *, float, float);

void sk_canvas_set_matrix (void *, void *);

void sk_canvas_skew (void *, float, float);

void sk_canvas_translate (void *, float, float);

void sk_codec_destroy (void *);

int32_t sk_codec_get_encoded_format (void *);

int32_t sk_codec_get_frame_count (void *);

void sk_codec_get_frame_info (void *, void *);

int32_t sk_codec_get_frame_info_for_index (void *, int32_t, void *);

void sk_codec_get_info (void *, void *);

int32_t sk_codec_get_origin (void *);

int32_t sk_codec_get_pixels (void *, void *, void *, void *, void *);

int32_t sk_codec_get_repetition_count (void *);

void sk_codec_get_scaled_dimensions (void *, float, void *);

int32_t sk_codec_get_scanline_order (void *);

int32_t sk_codec_get_scanlines (void *, void *, int32_t, void *);

int32_t sk_codec_get_valid_subset (void *, void *);

int32_t sk_codec_incremental_decode (void *, void *);

void * sk_codec_min_buffered_bytes_needed ();

void * sk_codec_new_from_data (void *);

void * sk_codec_new_from_stream (void *, void *);

int32_t sk_codec_next_scanline (void *);

int32_t sk_codec_output_scanline (void *, int32_t);

int32_t sk_codec_skip_scanlines (void *, int32_t);

int32_t sk_codec_start_incremental_decode (void *, void *, void *, void *, void *);

int32_t sk_codec_start_scanline_decode (void *, void *, void *);

void sk_color4f_from_color (uint32_t, void *);

uint32_t sk_color4f_to_color (void *);

void sk_color_get_bit_shift (void *, void *, void *, void *);

uint32_t sk_color_premultiply (uint32_t);

void sk_color_premultiply_array (void *, int32_t, void *);

uint32_t sk_color_unpremultiply (uint32_t);

void sk_color_unpremultiply_array (void *, int32_t, void *);

void * sk_colorfilter_new_color_matrix (void *);

void * sk_colorfilter_new_compose (void *, void *);

void * sk_colorfilter_new_high_contrast (void *);

void * sk_colorfilter_new_hsla_matrix (void *);

void * sk_colorfilter_new_lerp (float, void *, void *);

void * sk_colorfilter_new_lighting (uint32_t, uint32_t);

void * sk_colorfilter_new_linear_to_srgb_gamma ();

void * sk_colorfilter_new_luma_color ();

void * sk_colorfilter_new_mode (uint32_t, int32_t);

void * sk_colorfilter_new_srgb_to_linear_gamma ();

void * sk_colorfilter_new_table (void *);

void * sk_colorfilter_new_table_argb (void *, void *, void *, void *);

void sk_colorfilter_unref (void *);

int32_t sk_colorspace_equals (void *, void *);

int32_t sk_colorspace_gamma_close_to_srgb (void *);

int32_t sk_colorspace_gamma_is_linear (void *);

void sk_colorspace_icc_profile_delete (void *);

void * sk_colorspace_icc_profile_get_buffer (void *, void *);

int32_t sk_colorspace_icc_profile_get_to_xyzd50 (void *, void *);

void * sk_colorspace_icc_profile_new ();

int32_t sk_colorspace_icc_profile_parse (void *, void *, void *);

int32_t sk_colorspace_is_numerical_transfer_fn (void *, void *);

int32_t sk_colorspace_is_srgb (void *);

void * sk_colorspace_make_linear_gamma (void *);

void * sk_colorspace_make_srgb_gamma (void *);

void * sk_colorspace_new_icc (void *);

void * sk_colorspace_new_rgb (void *, void *);

void * sk_colorspace_new_srgb ();

void * sk_colorspace_new_srgb_linear ();

int32_t sk_colorspace_primaries_to_xyzd50 (void *, void *);

void sk_colorspace_ref (void *);

void sk_colorspace_to_profile (void *, void *);

int32_t sk_colorspace_to_xyzd50 (void *, void *);

float sk_colorspace_transfer_fn_eval (void *, float);

int32_t sk_colorspace_transfer_fn_invert (void *, void *);

void sk_colorspace_transfer_fn_named_2dot2 (void *);

void sk_colorspace_transfer_fn_named_hlg (void *);

void sk_colorspace_transfer_fn_named_linear (void *);

void sk_colorspace_transfer_fn_named_pq (void *);

void sk_colorspace_transfer_fn_named_rec2020 (void *);

void sk_colorspace_transfer_fn_named_srgb (void *);

void sk_colorspace_unref (void *);

void sk_colorspace_xyz_concat (void *, void *, void *);

int32_t sk_colorspace_xyz_invert (void *, void *);

void sk_colorspace_xyz_named_adobe_rgb (void *);

void sk_colorspace_xyz_named_display_p3 (void *);

void sk_colorspace_xyz_named_rec2020 (void *);

void sk_colorspace_xyz_named_srgb (void *);

void sk_colorspace_xyz_named_xyz (void *);

int32_t sk_colortype_get_default_8888 ();

void * sk_compatpaint_clone (void *);

void sk_compatpaint_delete (void *);

int32_t sk_compatpaint_get_filter_quality (void *);

void * sk_compatpaint_get_font (void *);

int32_t sk_compatpaint_get_lcd_render_text (void *);

int32_t sk_compatpaint_get_text_align (void *);

int32_t sk_compatpaint_get_text_encoding (void *);

void * sk_compatpaint_make_font (void *);

void * sk_compatpaint_new ();

void * sk_compatpaint_new_with_font (void *);

void sk_compatpaint_reset (void *);

void sk_compatpaint_set_filter_quality (void *, int32_t);

void sk_compatpaint_set_is_antialias (void *, int32_t);

void sk_compatpaint_set_lcd_render_text (void *, int32_t);

void sk_compatpaint_set_text_align (void *, int32_t);

void sk_compatpaint_set_text_encoding (void *, int32_t);

void * sk_data_get_bytes (void *);

void * sk_data_get_data (void *);

void * sk_data_get_size (void *);

void * sk_data_new_empty ();

void * sk_data_new_from_file (void *);

void * sk_data_new_from_stream (void *, void *);

void * sk_data_new_subset (void *, void *, void *);

void * sk_data_new_uninitialized (void *);

void * sk_data_new_with_copy (void *, void *);

void * sk_data_new_with_proc (void *, void *, void *, void *);

void sk_data_ref (void *);

void sk_data_unref (void *);

void sk_document_abort (void *);

void * sk_document_begin_page (void *, float, float, void *);

void sk_document_close (void *);

void * sk_document_create_pdf_from_stream (void *);

void * sk_document_create_pdf_from_stream_with_metadata (void *, void *);

void * sk_document_create_xps_from_stream (void *, float);

void sk_document_end_page (void *);

void sk_document_unref (void *);

void * sk_drawable_approximate_bytes_used (void *);

void sk_drawable_draw (void *, void *, void *);

void sk_drawable_get_bounds (void *, void *);

uint32_t sk_drawable_get_generation_id (void *);

void * sk_drawable_new_picture_snapshot (void *);

void sk_drawable_notify_drawing_changed (void *);

void sk_drawable_unref (void *);

void sk_dynamicmemorywstream_copy_to (void *, void *);

void sk_dynamicmemorywstream_destroy (void *);

void * sk_dynamicmemorywstream_detach_as_data (void *);

void * sk_dynamicmemorywstream_detach_as_stream (void *);

void * sk_dynamicmemorywstream_new ();

int32_t sk_dynamicmemorywstream_write_to_stream (void *, void *);

void sk_filestream_destroy (void *);

int32_t sk_filestream_is_valid (void *);

void * sk_filestream_new (void *);

void sk_filewstream_destroy (void *);

int32_t sk_filewstream_is_valid (void *);

void * sk_filewstream_new (void *);

void * sk_font_break_text (void *, void *, void *, int32_t, float, void *, void *);

void sk_font_delete (void *);

int32_t sk_font_get_edging (void *);

int32_t sk_font_get_hinting (void *);

float sk_font_get_metrics (void *, void *);

int32_t sk_font_get_path (void *, uint32_t, void *);

void sk_font_get_paths (void *, void *, int32_t, void *, void *);

void sk_font_get_pos (void *, void *, int32_t, void *, void *);

float sk_font_get_scale_x (void *);

float sk_font_get_size (void *);

float sk_font_get_skew_x (void *);

void * sk_font_get_typeface (void *);

void sk_font_get_widths_bounds (void *, void *, int32_t, void *, void *, void *);

void sk_font_get_xpos (void *, void *, int32_t, void *, float);

int32_t sk_font_is_baseline_snap (void *);

int32_t sk_font_is_embedded_bitmaps (void *);

int32_t sk_font_is_embolden (void *);

int32_t sk_font_is_force_auto_hinting (void *);

int32_t sk_font_is_linear_metrics (void *);

int32_t sk_font_is_subpixel (void *);

float sk_font_measure_text (void *, void *, void *, int32_t, void *, void *);

void sk_font_measure_text_no_return (void *, void *, void *, int32_t, void *, void *, void *);

void * sk_font_new ();

void * sk_font_new_with_values (void *, float, float, float);

void sk_font_set_baseline_snap (void *, int32_t);

void sk_font_set_edging (void *, int32_t);

void sk_font_set_embedded_bitmaps (void *, int32_t);

void sk_font_set_embolden (void *, int32_t);

void sk_font_set_force_auto_hinting (void *, int32_t);

void sk_font_set_hinting (void *, int32_t);

void sk_font_set_linear_metrics (void *, int32_t);

void sk_font_set_scale_x (void *, float);

void sk_font_set_size (void *, float);

void sk_font_set_skew_x (void *, float);

void sk_font_set_subpixel (void *, int32_t);

void sk_font_set_typeface (void *, void *);

int32_t sk_font_text_to_glyphs (void *, void *, void *, int32_t, void *, int32_t);

uint32_t sk_font_unichar_to_glyph (void *, int32_t);

void sk_font_unichars_to_glyphs (void *, void *, int32_t, void *);

int32_t sk_fontmgr_count_families (void *);

void * sk_fontmgr_create_default ();

void * sk_fontmgr_create_from_data (void *, void *, int32_t);

void * sk_fontmgr_create_from_file (void *, void *, int32_t);

void * sk_fontmgr_create_from_stream (void *, void *, int32_t);

void * sk_fontmgr_create_styleset (void *, int32_t);

void sk_fontmgr_get_family_name (void *, int32_t, void *);

void * sk_fontmgr_match_family (void *, void *);

void * sk_fontmgr_match_family_style (void *, void *, void *);

void * sk_fontmgr_match_family_style_character (void *, void *, void *, void *, int32_t, int32_t);

void * sk_fontmgr_ref_default ();

void sk_fontmgr_unref (void *);

void sk_fontstyle_delete (void *);

int32_t sk_fontstyle_get_slant (void *);

int32_t sk_fontstyle_get_weight (void *);

int32_t sk_fontstyle_get_width (void *);

void * sk_fontstyle_new (int32_t, int32_t, int32_t);

void * sk_fontstyleset_create_empty ();

void * sk_fontstyleset_create_typeface (void *, int32_t);

int32_t sk_fontstyleset_get_count (void *);

void sk_fontstyleset_get_style (void *, int32_t, void *, void *);

void * sk_fontstyleset_match_style (void *, void *);

void sk_fontstyleset_unref (void *);

void * sk_get_recording_context (void *);

void * sk_get_surface (void *);

void sk_graphics_dump_memory_statistics (void *);

int32_t sk_graphics_get_font_cache_count_limit ();

int32_t sk_graphics_get_font_cache_count_used ();

void * sk_graphics_get_font_cache_limit ();

void * sk_graphics_get_font_cache_used ();

void * sk_graphics_get_resource_cache_single_allocation_byte_limit ();

void * sk_graphics_get_resource_cache_total_byte_limit ();

void * sk_graphics_get_resource_cache_total_bytes_used ();

void sk_graphics_init ();

void sk_graphics_purge_all_caches ();

void sk_graphics_purge_font_cache ();

void sk_graphics_purge_resource_cache ();

int32_t sk_graphics_set_font_cache_count_limit (int32_t);

void * sk_graphics_set_font_cache_limit (void *);

void * sk_graphics_set_resource_cache_single_allocation_byte_limit (void *);

void * sk_graphics_set_resource_cache_total_byte_limit (void *);

int32_t sk_image_get_alpha_type (void *);

int32_t sk_image_get_color_type (void *);

void * sk_image_get_colorspace (void *);

int32_t sk_image_get_height (void *);

uint32_t sk_image_get_unique_id (void *);

int32_t sk_image_get_width (void *);

int32_t sk_image_is_alpha_only (void *);

int32_t sk_image_is_lazy_generated (void *);

int32_t sk_image_is_texture_backed (void *);

int32_t sk_image_is_valid (void *, void *);

void * sk_image_make_non_texture_image (void *);

void * sk_image_make_raster_image (void *);

void * sk_image_make_raw_shader (void *, int32_t, int32_t, void *, void *);

void * sk_image_make_shader (void *, int32_t, int32_t, void *, void *);

void * sk_image_make_subset (void *, void *, void *);

void * sk_image_make_subset_raster (void *, void *);

void * sk_image_make_texture_image (void *, void *, int32_t, int32_t);

void * sk_image_make_with_filter (void *, void *, void *, void *, void *, void *, void *);

void * sk_image_make_with_filter_raster (void *, void *, void *, void *, void *, void *);

void * sk_image_new_from_adopted_texture (void *, void *, int32_t, int32_t, int32_t, void *);

void * sk_image_new_from_bitmap (void *);

void * sk_image_new_from_encoded (void *);

void * sk_image_new_from_picture (void *, void *, void *, void *, int32_t, void *, void *);

void * sk_image_new_from_texture (void *, void *, int32_t, int32_t, int32_t, void *, void *, void *);

void * sk_image_new_raster (void *, void *, void *);

void * sk_image_new_raster_copy (void *, void *, void *);

void * sk_image_new_raster_copy_with_pixmap (void *);

void * sk_image_new_raster_data (void *, void *, void *);

int32_t sk_image_peek_pixels (void *, void *);

int32_t sk_image_read_pixels (void *, void *, void *, void *, int32_t, int32_t, int32_t);

int32_t sk_image_read_pixels_into_pixmap (void *, void *, int32_t, int32_t, int32_t);

void sk_image_ref (void *);

void * sk_image_ref_encoded (void *);

int32_t sk_image_scale_pixels (void *, void *, void *, int32_t);

void sk_image_unref (void *);

void * sk_imagefilter_new_arithmetic (float, float, float, float, int32_t, void *, void *, void *);

void * sk_imagefilter_new_blend (int32_t, void *, void *, void *);

void * sk_imagefilter_new_blender (void *, void *, void *, void *);

void * sk_imagefilter_new_blur (float, float, int32_t, void *, void *);

void * sk_imagefilter_new_color_filter (void *, void *, void *);

void * sk_imagefilter_new_compose (void *, void *);

void * sk_imagefilter_new_dilate (float, float, void *, void *);

void * sk_imagefilter_new_displacement_map_effect (int32_t, int32_t, float, void *, void *, void *);

void * sk_imagefilter_new_distant_lit_diffuse (void *, uint32_t, float, float, void *, void *);

void * sk_imagefilter_new_distant_lit_specular (void *, uint32_t, float, float, float, void *, void *);

void * sk_imagefilter_new_drop_shadow (float, float, float, float, uint32_t, void *, void *);

void * sk_imagefilter_new_drop_shadow_only (float, float, float, float, uint32_t, void *, void *);

void * sk_imagefilter_new_erode (float, float, void *, void *);

void * sk_imagefilter_new_image (void *, void *, void *, void *);

void * sk_imagefilter_new_image_simple (void *, void *);

void * sk_imagefilter_new_magnifier (void *, float, float, void *, void *, void *);

void * sk_imagefilter_new_matrix_convolution (void *, void *, float, float, void *, int32_t, int32_t, void *, void *);

void * sk_imagefilter_new_matrix_transform (void *, void *, void *);

void * sk_imagefilter_new_merge (void *, int32_t, void *);

void * sk_imagefilter_new_merge_simple (void *, void *, void *);

void * sk_imagefilter_new_offset (float, float, void *, void *);

void * sk_imagefilter_new_picture (void *);

void * sk_imagefilter_new_picture_with_rect (void *, void *);

void * sk_imagefilter_new_point_lit_diffuse (void *, uint32_t, float, float, void *, void *);

void * sk_imagefilter_new_point_lit_specular (void *, uint32_t, float, float, float, void *, void *);

void * sk_imagefilter_new_shader (void *, int32_t, void *);

void * sk_imagefilter_new_spot_lit_diffuse (void *, void *, float, float, uint32_t, float, float, void *, void *);

void * sk_imagefilter_new_spot_lit_specular (void *, void *, float, float, uint32_t, float, float, float, void *, void *);

void * sk_imagefilter_new_tile (void *, void *, void *);

void sk_imagefilter_unref (void *);

int32_t sk_jpegencoder_encode (void *, void *, void *);

void sk_linker_keep_alive ();

void * sk_manageddrawable_new (void *);

void sk_manageddrawable_set_procs (void *);

void sk_manageddrawable_unref (void *);

void sk_managedstream_destroy (void *);

void * sk_managedstream_new (void *);

void sk_managedstream_set_procs (void *);

void sk_managedtracememorydump_delete (void *);

void * sk_managedtracememorydump_new (int32_t, int32_t, void *);

void sk_managedtracememorydump_set_procs (void *);

void sk_managedwstream_destroy (void *);

void * sk_managedwstream_new (void *);

void sk_managedwstream_set_procs (void *);

void * sk_maskfilter_new_blur (int32_t, float);

void * sk_maskfilter_new_blur_with_flags (int32_t, float, int32_t);

void * sk_maskfilter_new_clip (uint32_t, uint32_t);

void * sk_maskfilter_new_gamma (float);

void * sk_maskfilter_new_shader (void *);

void * sk_maskfilter_new_table (void *);

void sk_maskfilter_ref (void *);

void sk_maskfilter_unref (void *);

void sk_matrix_concat (void *, void *, void *);

void sk_matrix_map_points (void *, void *, void *, int32_t);

float sk_matrix_map_radius (void *, float);

void sk_matrix_map_rect (void *, void *, void *);

void sk_matrix_map_vector (void *, float, float, void *);

void sk_matrix_map_vectors (void *, void *, void *, int32_t);

void sk_matrix_map_xy (void *, float, float, void *);

void sk_matrix_post_concat (void *, void *);

void sk_matrix_pre_concat (void *, void *);

int32_t sk_matrix_try_invert (void *, void *);

void sk_memorystream_destroy (void *);

void * sk_memorystream_new ();

void * sk_memorystream_new_with_data (void *, void *, int32_t);

void * sk_memorystream_new_with_length (void *);

void * sk_memorystream_new_with_skdata (void *);

void sk_memorystream_set_memory (void *, void *, void *, int32_t);

void sk_nodraw_canvas_destroy (void *);

void * sk_nodraw_canvas_new (int32_t, int32_t);

int32_t sk_nvrefcnt_get_ref_count (void *);

void sk_nvrefcnt_safe_ref (void *);

void sk_nvrefcnt_safe_unref (void *);

int32_t sk_nvrefcnt_unique (void *);

void sk_nway_canvas_add_canvas (void *, void *);

void sk_nway_canvas_destroy (void *);

void * sk_nway_canvas_new (int32_t, int32_t);

void sk_nway_canvas_remove_all (void *);

void sk_nway_canvas_remove_canvas (void *, void *);

void sk_opbuilder_add (void *, void *, int32_t);

void sk_opbuilder_destroy (void *);

void * sk_opbuilder_new ();

int32_t sk_opbuilder_resolve (void *, void *);

void sk_overdraw_canvas_destroy (void *);

void * sk_overdraw_canvas_new (void *);

void * sk_paint_clone (void *);

void sk_paint_delete (void *);

void * sk_paint_get_blender (void *);

int32_t sk_paint_get_blendmode (void *);

uint32_t sk_paint_get_color (void *);

void sk_paint_get_color4f (void *, void *);

void * sk_paint_get_colorfilter (void *);

int32_t sk_paint_get_fill_path (void *, void *, void *, void *, void *);

void * sk_paint_get_imagefilter (void *);

void * sk_paint_get_maskfilter (void *);

void * sk_paint_get_path_effect (void *);

void * sk_paint_get_shader (void *);

int32_t sk_paint_get_stroke_cap (void *);

int32_t sk_paint_get_stroke_join (void *);

float sk_paint_get_stroke_miter (void *);

float sk_paint_get_stroke_width (void *);

int32_t sk_paint_get_style (void *);

int32_t sk_paint_is_antialias (void *);

int32_t sk_paint_is_dither (void *);

void * sk_paint_new ();

void sk_paint_reset (void *);

void sk_paint_set_antialias (void *, int32_t);

void sk_paint_set_blender (void *, void *);

void sk_paint_set_blendmode (void *, int32_t);

void sk_paint_set_color (void *, uint32_t);

void sk_paint_set_color4f (void *, void *, void *);

void sk_paint_set_colorfilter (void *, void *);

void sk_paint_set_dither (void *, int32_t);

void sk_paint_set_imagefilter (void *, void *);

void sk_paint_set_maskfilter (void *, void *);

void sk_paint_set_path_effect (void *, void *);

void sk_paint_set_shader (void *, void *);

void sk_paint_set_stroke_cap (void *, int32_t);

void sk_paint_set_stroke_join (void *, int32_t);

void sk_paint_set_stroke_miter (void *, float);

void sk_paint_set_stroke_width (void *, float);

void sk_paint_set_style (void *, int32_t);

void sk_path_add_arc (void *, void *, float, float);

void sk_path_add_circle (void *, float, float, float, int32_t);

void sk_path_add_oval (void *, void *, int32_t);

void sk_path_add_path (void *, void *, int32_t);

void sk_path_add_path_matrix (void *, void *, void *, int32_t);

void sk_path_add_path_offset (void *, void *, float, float, int32_t);

void sk_path_add_path_reverse (void *, void *);

void sk_path_add_poly (void *, void *, int32_t, int32_t);

void sk_path_add_rect (void *, void *, int32_t);

void sk_path_add_rect_start (void *, void *, int32_t, uint32_t);

void sk_path_add_rounded_rect (void *, void *, float, float, int32_t);

void sk_path_add_rrect (void *, void *, int32_t);

void sk_path_add_rrect_start (void *, void *, int32_t, uint32_t);

void sk_path_arc_to (void *, float, float, float, int32_t, int32_t, float, float);

void sk_path_arc_to_with_oval (void *, void *, float, float, int32_t);

void sk_path_arc_to_with_points (void *, float, float, float, float, float);

void * sk_path_clone (void *);

void sk_path_close (void *);

void sk_path_compute_tight_bounds (void *, void *);

void sk_path_conic_to (void *, float, float, float, float, float);

int32_t sk_path_contains (void *, float, float);

int32_t sk_path_convert_conic_to_quads (void *, void *, void *, float, void *, int32_t);

int32_t sk_path_count_points (void *);

int32_t sk_path_count_verbs (void *);

void * sk_path_create_iter (void *, int32_t);

void * sk_path_create_rawiter (void *);

void sk_path_cubic_to (void *, float, float, float, float, float, float);

void sk_path_delete (void *);

void * sk_path_effect_create_1d_path (void *, float, float, int32_t);

void * sk_path_effect_create_2d_line (float, void *);

void * sk_path_effect_create_2d_path (void *, void *);

void * sk_path_effect_create_compose (void *, void *);

void * sk_path_effect_create_corner (float);

void * sk_path_effect_create_dash (void *, int32_t, float);

void * sk_path_effect_create_discrete (float, float, uint32_t);

void * sk_path_effect_create_sum (void *, void *);

void * sk_path_effect_create_trim (float, float, int32_t);

void sk_path_effect_unref (void *);

void sk_path_get_bounds (void *, void *);

int32_t sk_path_get_filltype (void *);

int32_t sk_path_get_last_point (void *, void *);

void sk_path_get_point (void *, int32_t, void *);

int32_t sk_path_get_points (void *, void *, int32_t);

uint32_t sk_path_get_segment_masks (void *);

int32_t sk_path_is_convex (void *);

int32_t sk_path_is_line (void *, void *);

int32_t sk_path_is_oval (void *, void *);

int32_t sk_path_is_rect (void *, void *, void *, void *);

int32_t sk_path_is_rrect (void *, void *);

float sk_path_iter_conic_weight (void *);

void sk_path_iter_destroy (void *);

int32_t sk_path_iter_is_close_line (void *);

int32_t sk_path_iter_is_closed_contour (void *);

int32_t sk_path_iter_next (void *, void *);

void sk_path_line_to (void *, float, float);

void sk_path_move_to (void *, float, float);

void * sk_path_new ();

int32_t sk_path_parse_svg_string (void *, void *);

void sk_path_quad_to (void *, float, float, float, float);

void sk_path_rarc_to (void *, float, float, float, int32_t, int32_t, float, float);

float sk_path_rawiter_conic_weight (void *);

void sk_path_rawiter_destroy (void *);

int32_t sk_path_rawiter_next (void *, void *);

int32_t sk_path_rawiter_peek (void *);

void sk_path_rconic_to (void *, float, float, float, float, float);

void sk_path_rcubic_to (void *, float, float, float, float, float, float);

void sk_path_reset (void *);

void sk_path_rewind (void *);

void sk_path_rline_to (void *, float, float);

void sk_path_rmove_to (void *, float, float);

void sk_path_rquad_to (void *, float, float, float, float);

void sk_path_set_filltype (void *, int32_t);

void sk_path_to_svg_string (void *, void *);

void sk_path_transform (void *, void *);

void sk_path_transform_to_dest (void *, void *, void *);

void sk_pathmeasure_destroy (void *);

float sk_pathmeasure_get_length (void *);

int32_t sk_pathmeasure_get_matrix (void *, float, void *, int32_t);

int32_t sk_pathmeasure_get_pos_tan (void *, float, void *, void *);

int32_t sk_pathmeasure_get_segment (void *, float, float, void *, int32_t);

int32_t sk_pathmeasure_is_closed (void *);

void * sk_pathmeasure_new ();

void * sk_pathmeasure_new_with_path (void *, int32_t, float);

int32_t sk_pathmeasure_next_contour (void *);

void sk_pathmeasure_set_path (void *, void *, int32_t);

int32_t sk_pathop_as_winding (void *, void *);

int32_t sk_pathop_op (void *, void *, int32_t, void *);

int32_t sk_pathop_simplify (void *, void *);

int32_t sk_pathop_tight_bounds (void *, void *);

void * sk_picture_approximate_bytes_used (void *);

int32_t sk_picture_approximate_op_count (void *, int32_t);

void * sk_picture_deserialize_from_data (void *);

void * sk_picture_deserialize_from_memory (void *, void *);

void * sk_picture_deserialize_from_stream (void *);

void sk_picture_get_cull_rect (void *, void *);

void * sk_picture_get_recording_canvas (void *);

uint32_t sk_picture_get_unique_id (void *);

void * sk_picture_make_shader (void *, int32_t, int32_t, int32_t, void *, void *);

void sk_picture_playback (void *, void *);

void * sk_picture_recorder_begin_recording (void *, void *);

void * sk_picture_recorder_begin_recording_with_bbh_factory (void *, void *, void *);

void sk_picture_recorder_delete (void *);

void * sk_picture_recorder_end_recording (void *);

void * sk_picture_recorder_end_recording_as_drawable (void *);

void * sk_picture_recorder_new ();

void sk_picture_ref (void *);

void * sk_picture_serialize_to_data (void *);

void sk_picture_serialize_to_stream (void *, void *);

void sk_picture_unref (void *);

int32_t sk_pixmap_compute_is_opaque (void *);

void sk_pixmap_destructor (void *);

int32_t sk_pixmap_erase_color (void *, uint32_t, void *);

int32_t sk_pixmap_erase_color4f (void *, void *, void *);

int32_t sk_pixmap_extract_subset (void *, void *, void *);

void * sk_pixmap_get_colorspace (void *);

void sk_pixmap_get_info (void *, void *);

float sk_pixmap_get_pixel_alphaf (void *, int32_t, int32_t);

uint32_t sk_pixmap_get_pixel_color (void *, int32_t, int32_t);

void sk_pixmap_get_pixel_color4f (void *, int32_t, int32_t, void *);

void * sk_pixmap_get_row_bytes (void *);

void * sk_pixmap_get_writable_addr (void *);

void * sk_pixmap_get_writeable_addr_with_xy (void *, int32_t, int32_t);

void * sk_pixmap_new ();

void * sk_pixmap_new_with_params (void *, void *, void *);

int32_t sk_pixmap_read_pixels (void *, void *, void *, void *, int32_t, int32_t);

void sk_pixmap_reset (void *);

void sk_pixmap_reset_with_params (void *, void *, void *, void *);

int32_t sk_pixmap_scale_pixels (void *, void *, void *);

void sk_pixmap_set_colorspace (void *, void *);

int32_t sk_pngencoder_encode (void *, void *, void *);

int32_t sk_refcnt_get_ref_count (void *);

void sk_refcnt_safe_ref (void *);

void sk_refcnt_safe_unref (void *);

int32_t sk_refcnt_unique (void *);

void sk_region_cliperator_delete (void *);

int32_t sk_region_cliperator_done (void *);

void * sk_region_cliperator_new (void *, void *);

void sk_region_cliperator_next (void *);

void sk_region_cliperator_rect (void *, void *);

int32_t sk_region_contains (void *, void *);

int32_t sk_region_contains_point (void *, int32_t, int32_t);

int32_t sk_region_contains_rect (void *, void *);

void sk_region_delete (void *);

int32_t sk_region_get_boundary_path (void *, void *);

void sk_region_get_bounds (void *, void *);

int32_t sk_region_intersects (void *, void *);

int32_t sk_region_intersects_rect (void *, void *);

int32_t sk_region_is_complex (void *);

int32_t sk_region_is_empty (void *);

int32_t sk_region_is_rect (void *);

void sk_region_iterator_delete (void *);

int32_t sk_region_iterator_done (void *);

void * sk_region_iterator_new (void *);

void sk_region_iterator_next (void *);

void sk_region_iterator_rect (void *, void *);

int32_t sk_region_iterator_rewind (void *);

void * sk_region_new ();

int32_t sk_region_op (void *, void *, int32_t);

int32_t sk_region_op_rect (void *, void *, int32_t);

int32_t sk_region_quick_contains (void *, void *);

int32_t sk_region_quick_reject (void *, void *);

int32_t sk_region_quick_reject_rect (void *, void *);

int32_t sk_region_set_empty (void *);

int32_t sk_region_set_path (void *, void *, void *);

int32_t sk_region_set_rect (void *, void *);

int32_t sk_region_set_rects (void *, void *, int32_t);

int32_t sk_region_set_region (void *, void *);

void sk_region_spanerator_delete (void *);

void * sk_region_spanerator_new (void *, int32_t, int32_t, int32_t);

int32_t sk_region_spanerator_next (void *, void *, void *);

void sk_region_translate (void *, int32_t, int32_t);

int32_t sk_rrect_contains (void *, void *);

void sk_rrect_delete (void *);

float sk_rrect_get_height (void *);

void sk_rrect_get_radii (void *, int32_t, void *);

void sk_rrect_get_rect (void *, void *);

int32_t sk_rrect_get_type (void *);

float sk_rrect_get_width (void *);

void sk_rrect_inset (void *, float, float);

int32_t sk_rrect_is_valid (void *);

void * sk_rrect_new ();

void * sk_rrect_new_copy (void *);

void sk_rrect_offset (void *, float, float);

void sk_rrect_outset (void *, float, float);

void sk_rrect_set_empty (void *);

void sk_rrect_set_nine_patch (void *, void *, float, float, float, float);

void sk_rrect_set_oval (void *, void *);

void sk_rrect_set_rect (void *, void *);

void sk_rrect_set_rect_radii (void *, void *, void *);

void sk_rrect_set_rect_xy (void *, void *, float, float);

int32_t sk_rrect_transform (void *, void *, void *);

void sk_rtree_factory_delete (void *);

void * sk_rtree_factory_new ();

void sk_runtimeeffect_get_child_from_index (void *, int32_t, void *);

void sk_runtimeeffect_get_child_from_name (void *, void *, void *, void *);

void sk_runtimeeffect_get_child_name (void *, int32_t, void *);

void * sk_runtimeeffect_get_children_size (void *);

void * sk_runtimeeffect_get_uniform_byte_size (void *);

void sk_runtimeeffect_get_uniform_from_index (void *, int32_t, void *);

void sk_runtimeeffect_get_uniform_from_name (void *, void *, void *, void *);

void sk_runtimeeffect_get_uniform_name (void *, int32_t, void *);

void * sk_runtimeeffect_get_uniforms_size (void *);

void * sk_runtimeeffect_make_blender (void *, void *, void *, void *);

void * sk_runtimeeffect_make_color_filter (void *, void *, void *, void *);

void * sk_runtimeeffect_make_for_blender (void *, void *);

void * sk_runtimeeffect_make_for_color_filter (void *, void *);

void * sk_runtimeeffect_make_for_shader (void *, void *);

void * sk_runtimeeffect_make_shader (void *, void *, void *, void *, void *);

void sk_runtimeeffect_unref (void *);

void * sk_shader_new_blend (int32_t, void *, void *);

void * sk_shader_new_blender (void *, void *, void *);

void * sk_shader_new_color (uint32_t);

void * sk_shader_new_color4f (void *, void *);

void * sk_shader_new_empty ();

void * sk_shader_new_linear_gradient (void *, void *, void *, int32_t, int32_t, void *);

void * sk_shader_new_linear_gradient_color4f (void *, void *, void *, void *, int32_t, int32_t, void *);

void * sk_shader_new_perlin_noise_fractal_noise (float, float, int32_t, float, void *);

void * sk_shader_new_perlin_noise_turbulence (float, float, int32_t, float, void *);

void * sk_shader_new_radial_gradient (void *, float, void *, void *, int32_t, int32_t, void *);

void * sk_shader_new_radial_gradient_color4f (void *, float, void *, void *, void *, int32_t, int32_t, void *);

void * sk_shader_new_sweep_gradient (void *, void *, void *, int32_t, int32_t, float, float, void *);

void * sk_shader_new_sweep_gradient_color4f (void *, void *, void *, void *, int32_t, int32_t, float, float, void *);

void * sk_shader_new_two_point_conical_gradient (void *, float, void *, float, void *, void *, int32_t, int32_t, void *);

void * sk_shader_new_two_point_conical_gradient_color4f (void *, float, void *, float, void *, void *, void *, int32_t, int32_t, void *);

void sk_shader_ref (void *);

void sk_shader_unref (void *);

void * sk_shader_with_color_filter (void *, void *);

void * sk_shader_with_local_matrix (void *, void *);

void sk_stream_asset_destroy (void *);

void sk_stream_destroy (void *);

void * sk_stream_duplicate (void *);

void * sk_stream_fork (void *);

void * sk_stream_get_length (void *);

void * sk_stream_get_memory_base (void *);

void * sk_stream_get_position (void *);

int32_t sk_stream_has_length (void *);

int32_t sk_stream_has_position (void *);

int32_t sk_stream_is_at_end (void *);

int32_t sk_stream_move (void *, int32_t);

void * sk_stream_peek (void *, void *, void *);

void * sk_stream_read (void *, void *, void *);

int32_t sk_stream_read_bool (void *, void *);

int32_t sk_stream_read_s16 (void *, void *);

int32_t sk_stream_read_s32 (void *, void *);

int32_t sk_stream_read_s8 (void *, void *);

int32_t sk_stream_read_u16 (void *, void *);

int32_t sk_stream_read_u32 (void *, void *);

int32_t sk_stream_read_u8 (void *, void *);

int32_t sk_stream_rewind (void *);

int32_t sk_stream_seek (void *, void *);

void * sk_stream_skip (void *, void *);

void sk_string_destructor (void *);

void * sk_string_get_c_str (void *);

void * sk_string_get_size (void *);

void * sk_string_new_empty ();

void * sk_string_new_with_copy (void *, void *);

void sk_surface_draw (void *, void *, float, float, void *);

void * sk_surface_get_canvas (void *);

void * sk_surface_get_props (void *);

void * sk_surface_get_recording_context (void *);

void * sk_surface_new_backend_render_target (void *, void *, int32_t, int32_t, void *, void *);

void * sk_surface_new_backend_texture (void *, void *, int32_t, int32_t, int32_t, void *, void *);

void * sk_surface_new_image_snapshot (void *);

void * sk_surface_new_image_snapshot_with_crop (void *, void *);

void * sk_surface_new_metal_layer (void *, void *, int32_t, int32_t, int32_t, void *, void *, void *);

void * sk_surface_new_metal_view (void *, void *, int32_t, int32_t, int32_t, void *, void *);

void * sk_surface_new_null (int32_t, int32_t);

void * sk_surface_new_raster (void *, void *, void *);

void * sk_surface_new_raster_direct (void *, void *, void *, void *, void *, void *);

void * sk_surface_new_render_target (void *, int32_t, void *, int32_t, int32_t, void *, int32_t);

int32_t sk_surface_peek_pixels (void *, void *);

int32_t sk_surface_read_pixels (void *, void *, void *, void *, int32_t, int32_t);

void sk_surface_unref (void *);

void sk_surfaceprops_delete (void *);

uint32_t sk_surfaceprops_get_flags (void *);

int32_t sk_surfaceprops_get_pixel_geometry (void *);

void * sk_surfaceprops_new (uint32_t, int32_t);

void * sk_svgcanvas_create_with_stream (void *, void *);

void sk_swizzle_swap_rb (void *, void *, int32_t);

void sk_text_utils_get_path (void *, void *, int32_t, float, float, void *, void *);

void sk_text_utils_get_pos_path (void *, void *, int32_t, void *, void *, void *);

void sk_textblob_builder_alloc_run (void *, void *, int32_t, float, float, void *, void *);

void sk_textblob_builder_alloc_run_pos (void *, void *, int32_t, void *, void *);

void sk_textblob_builder_alloc_run_pos_h (void *, void *, int32_t, float, void *, void *);

void sk_textblob_builder_alloc_run_rsxform (void *, void *, int32_t, void *, void *);

void sk_textblob_builder_alloc_run_text (void *, void *, int32_t, float, float, int32_t, void *, void *);

void sk_textblob_builder_alloc_run_text_pos (void *, void *, int32_t, int32_t, void *, void *);

void sk_textblob_builder_alloc_run_text_pos_h (void *, void *, int32_t, float, int32_t, void *, void *);

void sk_textblob_builder_alloc_run_text_rsxform (void *, void *, int32_t, int32_t, void *, void *);

void sk_textblob_builder_delete (void *);

void * sk_textblob_builder_make (void *);

void * sk_textblob_builder_new ();

void sk_textblob_get_bounds (void *, void *);

int32_t sk_textblob_get_intercepts (void *, void *, void *, void *);

uint32_t sk_textblob_get_unique_id (void *);

void sk_textblob_ref (void *);

void sk_textblob_unref (void *);

void * sk_typeface_copy_table_data (void *, uint32_t);

int32_t sk_typeface_count_glyphs (void *);

int32_t sk_typeface_count_tables (void *);

void * sk_typeface_create_default ();

void * sk_typeface_create_from_data (void *, int32_t);

void * sk_typeface_create_from_file (void *, int32_t);

void * sk_typeface_create_from_name (void *, void *);

void * sk_typeface_create_from_stream (void *, int32_t);

void * sk_typeface_get_family_name (void *);

int32_t sk_typeface_get_font_slant (void *);

int32_t sk_typeface_get_font_weight (void *);

int32_t sk_typeface_get_font_width (void *);

void * sk_typeface_get_fontstyle (void *);

int32_t sk_typeface_get_kerning_pair_adjustments (void *, void *, int32_t, void *);

void * sk_typeface_get_post_script_name (void *);

void * sk_typeface_get_table_data (void *, uint32_t, void *, void *, void *);

void * sk_typeface_get_table_size (void *, uint32_t);

int32_t sk_typeface_get_table_tags (void *, void *);

int32_t sk_typeface_get_units_per_em (void *);

int32_t sk_typeface_is_fixed_pitch (void *);

void * sk_typeface_open_stream (void *, void *);

void * sk_typeface_ref_default ();

uint32_t sk_typeface_unichar_to_glyph (void *, int32_t);

void sk_typeface_unichars_to_glyphs (void *, void *, int32_t, void *);

void sk_typeface_unref (void *);

int32_t sk_version_get_increment ();

int32_t sk_version_get_milestone ();

void * sk_version_get_string ();

void * sk_vertices_make_copy (int32_t, int32_t, void *, void *, void *, int32_t, void *);

void sk_vertices_ref (void *);

void sk_vertices_unref (void *);

int32_t sk_webpencoder_encode (void *, void *, void *);

void * sk_wstream_bytes_written (void *);

void sk_wstream_flush (void *);

int32_t sk_wstream_get_size_of_packed_uint (void *);

int32_t sk_wstream_newline (void *);

int32_t sk_wstream_write (void *, void *, void *);

int32_t sk_wstream_write_16 (void *, uint32_t);

int32_t sk_wstream_write_32 (void *, uint32_t);

int32_t sk_wstream_write_8 (void *, uint32_t);

int32_t sk_wstream_write_bigdec_as_text (void *, int64_t, int32_t);

int32_t sk_wstream_write_bool (void *, int32_t);

int32_t sk_wstream_write_dec_as_text (void *, int32_t);

int32_t sk_wstream_write_hex_as_text (void *, uint32_t, int32_t);

int32_t sk_wstream_write_packed_uint (void *, void *);

int32_t sk_wstream_write_scalar (void *, float);

int32_t sk_wstream_write_scalar_as_text (void *, float);

int32_t sk_wstream_write_stream (void *, void *, void *);

int32_t sk_wstream_write_text (void *, void *);

static PinvokeImport libSkiaSharp_imports [] = {
    {"InterceptBrowserObjects", InterceptBrowserObjects}, // SkiaSharp.Views.Blazor
    {"gr_backendrendertarget_delete", gr_backendrendertarget_delete}, // SkiaSharp
    {"gr_backendrendertarget_get_backend", gr_backendrendertarget_get_backend}, // SkiaSharp
    {"gr_backendrendertarget_get_gl_framebufferinfo", gr_backendrendertarget_get_gl_framebufferinfo}, // SkiaSharp
    {"gr_backendrendertarget_get_height", gr_backendrendertarget_get_height}, // SkiaSharp
    {"gr_backendrendertarget_get_samples", gr_backendrendertarget_get_samples}, // SkiaSharp
    {"gr_backendrendertarget_get_stencils", gr_backendrendertarget_get_stencils}, // SkiaSharp
    {"gr_backendrendertarget_get_width", gr_backendrendertarget_get_width}, // SkiaSharp
    {"gr_backendrendertarget_is_valid", gr_backendrendertarget_is_valid}, // SkiaSharp
    {"gr_backendrendertarget_new_direct3d", gr_backendrendertarget_new_direct3d}, // SkiaSharp
    {"gr_backendrendertarget_new_gl", gr_backendrendertarget_new_gl}, // SkiaSharp
    {"gr_backendrendertarget_new_metal", gr_backendrendertarget_new_metal}, // SkiaSharp
    {"gr_backendrendertarget_new_vulkan", gr_backendrendertarget_new_vulkan}, // SkiaSharp
    {"gr_backendtexture_delete", gr_backendtexture_delete}, // SkiaSharp
    {"gr_backendtexture_get_backend", gr_backendtexture_get_backend}, // SkiaSharp
    {"gr_backendtexture_get_gl_textureinfo", gr_backendtexture_get_gl_textureinfo}, // SkiaSharp
    {"gr_backendtexture_get_height", gr_backendtexture_get_height}, // SkiaSharp
    {"gr_backendtexture_get_width", gr_backendtexture_get_width}, // SkiaSharp
    {"gr_backendtexture_has_mipmaps", gr_backendtexture_has_mipmaps}, // SkiaSharp
    {"gr_backendtexture_is_valid", gr_backendtexture_is_valid}, // SkiaSharp
    {"gr_backendtexture_new_direct3d", gr_backendtexture_new_direct3d}, // SkiaSharp
    {"gr_backendtexture_new_gl", gr_backendtexture_new_gl}, // SkiaSharp
    {"gr_backendtexture_new_metal", gr_backendtexture_new_metal}, // SkiaSharp
    {"gr_backendtexture_new_vulkan", gr_backendtexture_new_vulkan}, // SkiaSharp
    {"gr_direct_context_abandon_context", gr_direct_context_abandon_context}, // SkiaSharp
    {"gr_direct_context_dump_memory_statistics", gr_direct_context_dump_memory_statistics}, // SkiaSharp
    {"gr_direct_context_flush", gr_direct_context_flush}, // SkiaSharp
    {"gr_direct_context_flush_and_submit", gr_direct_context_flush_and_submit}, // SkiaSharp
    {"gr_direct_context_flush_image", gr_direct_context_flush_image}, // SkiaSharp
    {"gr_direct_context_flush_surface", gr_direct_context_flush_surface}, // SkiaSharp
    {"gr_direct_context_free_gpu_resources", gr_direct_context_free_gpu_resources}, // SkiaSharp
    {"gr_direct_context_get_resource_cache_limit", gr_direct_context_get_resource_cache_limit}, // SkiaSharp
    {"gr_direct_context_get_resource_cache_usage", gr_direct_context_get_resource_cache_usage}, // SkiaSharp
    {"gr_direct_context_is_abandoned", gr_direct_context_is_abandoned}, // SkiaSharp
    {"gr_direct_context_make_direct3d", gr_direct_context_make_direct3d}, // SkiaSharp
    {"gr_direct_context_make_direct3d_with_options", gr_direct_context_make_direct3d_with_options}, // SkiaSharp
    {"gr_direct_context_make_gl", gr_direct_context_make_gl}, // SkiaSharp
    {"gr_direct_context_make_gl_with_options", gr_direct_context_make_gl_with_options}, // SkiaSharp
    {"gr_direct_context_make_metal", gr_direct_context_make_metal}, // SkiaSharp
    {"gr_direct_context_make_metal_with_options", gr_direct_context_make_metal_with_options}, // SkiaSharp
    {"gr_direct_context_make_vulkan", gr_direct_context_make_vulkan}, // SkiaSharp
    {"gr_direct_context_make_vulkan_with_options", gr_direct_context_make_vulkan_with_options}, // SkiaSharp
    {"gr_direct_context_perform_deferred_cleanup", gr_direct_context_perform_deferred_cleanup}, // SkiaSharp
    {"gr_direct_context_purge_unlocked_resources", gr_direct_context_purge_unlocked_resources}, // SkiaSharp
    {"gr_direct_context_purge_unlocked_resources_bytes", gr_direct_context_purge_unlocked_resources_bytes}, // SkiaSharp
    {"gr_direct_context_release_resources_and_abandon_context", gr_direct_context_release_resources_and_abandon_context}, // SkiaSharp
    {"gr_direct_context_reset_context", gr_direct_context_reset_context}, // SkiaSharp
    {"gr_direct_context_set_resource_cache_limit", gr_direct_context_set_resource_cache_limit}, // SkiaSharp
    {"gr_direct_context_submit", gr_direct_context_submit}, // SkiaSharp
    {"gr_glinterface_assemble_gl_interface", gr_glinterface_assemble_gl_interface}, // SkiaSharp
    {"gr_glinterface_assemble_gles_interface", gr_glinterface_assemble_gles_interface}, // SkiaSharp
    {"gr_glinterface_assemble_interface", gr_glinterface_assemble_interface}, // SkiaSharp
    {"gr_glinterface_assemble_webgl_interface", gr_glinterface_assemble_webgl_interface}, // SkiaSharp
    {"gr_glinterface_create_native_interface", gr_glinterface_create_native_interface}, // SkiaSharp
    {"gr_glinterface_has_extension", gr_glinterface_has_extension}, // SkiaSharp
    {"gr_glinterface_unref", gr_glinterface_unref}, // SkiaSharp
    {"gr_glinterface_validate", gr_glinterface_validate}, // SkiaSharp
    {"gr_recording_context_get_backend", gr_recording_context_get_backend}, // SkiaSharp
    {"gr_recording_context_get_direct_context", gr_recording_context_get_direct_context}, // SkiaSharp
    {"gr_recording_context_get_max_surface_sample_count_for_color_type", gr_recording_context_get_max_surface_sample_count_for_color_type}, // SkiaSharp
    {"gr_recording_context_is_abandoned", gr_recording_context_is_abandoned}, // SkiaSharp
    {"gr_recording_context_max_render_target_size", gr_recording_context_max_render_target_size}, // SkiaSharp
    {"gr_recording_context_max_texture_size", gr_recording_context_max_texture_size}, // SkiaSharp
    {"gr_recording_context_unref", gr_recording_context_unref}, // SkiaSharp
    {"gr_vk_extensions_delete", gr_vk_extensions_delete}, // SkiaSharp
    {"gr_vk_extensions_has_extension", gr_vk_extensions_has_extension}, // SkiaSharp
    {"gr_vk_extensions_init", gr_vk_extensions_init}, // SkiaSharp
    {"gr_vk_extensions_new", gr_vk_extensions_new}, // SkiaSharp
    {"sk_bitmap_destructor", sk_bitmap_destructor}, // SkiaSharp
    {"sk_bitmap_erase", sk_bitmap_erase}, // SkiaSharp
    {"sk_bitmap_erase_rect", sk_bitmap_erase_rect}, // SkiaSharp
    {"sk_bitmap_extract_alpha", sk_bitmap_extract_alpha}, // SkiaSharp
    {"sk_bitmap_extract_subset", sk_bitmap_extract_subset}, // SkiaSharp
    {"sk_bitmap_get_addr", sk_bitmap_get_addr}, // SkiaSharp
    {"sk_bitmap_get_addr_16", sk_bitmap_get_addr_16}, // SkiaSharp
    {"sk_bitmap_get_addr_32", sk_bitmap_get_addr_32}, // SkiaSharp
    {"sk_bitmap_get_addr_8", sk_bitmap_get_addr_8}, // SkiaSharp
    {"sk_bitmap_get_byte_count", sk_bitmap_get_byte_count}, // SkiaSharp
    {"sk_bitmap_get_info", sk_bitmap_get_info}, // SkiaSharp
    {"sk_bitmap_get_pixel_color", sk_bitmap_get_pixel_color}, // SkiaSharp
    {"sk_bitmap_get_pixel_colors", sk_bitmap_get_pixel_colors}, // SkiaSharp
    {"sk_bitmap_get_pixels", sk_bitmap_get_pixels}, // SkiaSharp
    {"sk_bitmap_get_row_bytes", sk_bitmap_get_row_bytes}, // SkiaSharp
    {"sk_bitmap_install_pixels", sk_bitmap_install_pixels}, // SkiaSharp
    {"sk_bitmap_install_pixels_with_pixmap", sk_bitmap_install_pixels_with_pixmap}, // SkiaSharp
    {"sk_bitmap_is_immutable", sk_bitmap_is_immutable}, // SkiaSharp
    {"sk_bitmap_is_null", sk_bitmap_is_null}, // SkiaSharp
    {"sk_bitmap_make_shader", sk_bitmap_make_shader}, // SkiaSharp
    {"sk_bitmap_new", sk_bitmap_new}, // SkiaSharp
    {"sk_bitmap_notify_pixels_changed", sk_bitmap_notify_pixels_changed}, // SkiaSharp
    {"sk_bitmap_peek_pixels", sk_bitmap_peek_pixels}, // SkiaSharp
    {"sk_bitmap_ready_to_draw", sk_bitmap_ready_to_draw}, // SkiaSharp
    {"sk_bitmap_reset", sk_bitmap_reset}, // SkiaSharp
    {"sk_bitmap_set_immutable", sk_bitmap_set_immutable}, // SkiaSharp
    {"sk_bitmap_set_pixels", sk_bitmap_set_pixels}, // SkiaSharp
    {"sk_bitmap_swap", sk_bitmap_swap}, // SkiaSharp
    {"sk_bitmap_try_alloc_pixels", sk_bitmap_try_alloc_pixels}, // SkiaSharp
    {"sk_bitmap_try_alloc_pixels_with_flags", sk_bitmap_try_alloc_pixels_with_flags}, // SkiaSharp
    {"sk_blender_new_arithmetic", sk_blender_new_arithmetic}, // SkiaSharp
    {"sk_blender_new_mode", sk_blender_new_mode}, // SkiaSharp
    {"sk_blender_ref", sk_blender_ref}, // SkiaSharp
    {"sk_blender_unref", sk_blender_unref}, // SkiaSharp
    {"sk_canvas_clear", sk_canvas_clear}, // SkiaSharp
    {"sk_canvas_clear_color4f", sk_canvas_clear_color4f}, // SkiaSharp
    {"sk_canvas_clip_path_with_operation", sk_canvas_clip_path_with_operation}, // SkiaSharp
    {"sk_canvas_clip_rect_with_operation", sk_canvas_clip_rect_with_operation}, // SkiaSharp
    {"sk_canvas_clip_region", sk_canvas_clip_region}, // SkiaSharp
    {"sk_canvas_clip_rrect_with_operation", sk_canvas_clip_rrect_with_operation}, // SkiaSharp
    {"sk_canvas_concat", sk_canvas_concat}, // SkiaSharp
    {"sk_canvas_destroy", sk_canvas_destroy}, // SkiaSharp
    {"sk_canvas_discard", sk_canvas_discard}, // SkiaSharp
    {"sk_canvas_draw_annotation", sk_canvas_draw_annotation}, // SkiaSharp
    {"sk_canvas_draw_arc", sk_canvas_draw_arc}, // SkiaSharp
    {"sk_canvas_draw_atlas", sk_canvas_draw_atlas}, // SkiaSharp
    {"sk_canvas_draw_circle", sk_canvas_draw_circle}, // SkiaSharp
    {"sk_canvas_draw_color", sk_canvas_draw_color}, // SkiaSharp
    {"sk_canvas_draw_color4f", sk_canvas_draw_color4f}, // SkiaSharp
    {"sk_canvas_draw_drawable", sk_canvas_draw_drawable}, // SkiaSharp
    {"sk_canvas_draw_drrect", sk_canvas_draw_drrect}, // SkiaSharp
    {"sk_canvas_draw_image", sk_canvas_draw_image}, // SkiaSharp
    {"sk_canvas_draw_image_lattice", sk_canvas_draw_image_lattice}, // SkiaSharp
    {"sk_canvas_draw_image_nine", sk_canvas_draw_image_nine}, // SkiaSharp
    {"sk_canvas_draw_image_rect", sk_canvas_draw_image_rect}, // SkiaSharp
    {"sk_canvas_draw_line", sk_canvas_draw_line}, // SkiaSharp
    {"sk_canvas_draw_link_destination_annotation", sk_canvas_draw_link_destination_annotation}, // SkiaSharp
    {"sk_canvas_draw_named_destination_annotation", sk_canvas_draw_named_destination_annotation}, // SkiaSharp
    {"sk_canvas_draw_oval", sk_canvas_draw_oval}, // SkiaSharp
    {"sk_canvas_draw_paint", sk_canvas_draw_paint}, // SkiaSharp
    {"sk_canvas_draw_patch", sk_canvas_draw_patch}, // SkiaSharp
    {"sk_canvas_draw_path", sk_canvas_draw_path}, // SkiaSharp
    {"sk_canvas_draw_picture", sk_canvas_draw_picture}, // SkiaSharp
    {"sk_canvas_draw_point", sk_canvas_draw_point}, // SkiaSharp
    {"sk_canvas_draw_points", sk_canvas_draw_points}, // SkiaSharp
    {"sk_canvas_draw_rect", sk_canvas_draw_rect}, // SkiaSharp
    {"sk_canvas_draw_region", sk_canvas_draw_region}, // SkiaSharp
    {"sk_canvas_draw_round_rect", sk_canvas_draw_round_rect}, // SkiaSharp
    {"sk_canvas_draw_rrect", sk_canvas_draw_rrect}, // SkiaSharp
    {"sk_canvas_draw_simple_text", sk_canvas_draw_simple_text}, // SkiaSharp
    {"sk_canvas_draw_text_blob", sk_canvas_draw_text_blob}, // SkiaSharp
    {"sk_canvas_draw_url_annotation", sk_canvas_draw_url_annotation}, // SkiaSharp
    {"sk_canvas_draw_vertices", sk_canvas_draw_vertices}, // SkiaSharp
    {"sk_canvas_get_device_clip_bounds", sk_canvas_get_device_clip_bounds}, // SkiaSharp
    {"sk_canvas_get_local_clip_bounds", sk_canvas_get_local_clip_bounds}, // SkiaSharp
    {"sk_canvas_get_matrix", sk_canvas_get_matrix}, // SkiaSharp
    {"sk_canvas_get_save_count", sk_canvas_get_save_count}, // SkiaSharp
    {"sk_canvas_is_clip_empty", sk_canvas_is_clip_empty}, // SkiaSharp
    {"sk_canvas_is_clip_rect", sk_canvas_is_clip_rect}, // SkiaSharp
    {"sk_canvas_new_from_bitmap", sk_canvas_new_from_bitmap}, // SkiaSharp
    {"sk_canvas_new_from_raster", sk_canvas_new_from_raster}, // SkiaSharp
    {"sk_canvas_quick_reject", sk_canvas_quick_reject}, // SkiaSharp
    {"sk_canvas_reset_matrix", sk_canvas_reset_matrix}, // SkiaSharp
    {"sk_canvas_restore", sk_canvas_restore}, // SkiaSharp
    {"sk_canvas_restore_to_count", sk_canvas_restore_to_count}, // SkiaSharp
    {"sk_canvas_rotate_degrees", sk_canvas_rotate_degrees}, // SkiaSharp
    {"sk_canvas_rotate_radians", sk_canvas_rotate_radians}, // SkiaSharp
    {"sk_canvas_save", sk_canvas_save}, // SkiaSharp
    {"sk_canvas_save_layer", sk_canvas_save_layer}, // SkiaSharp
    {"sk_canvas_save_layer_rec", sk_canvas_save_layer_rec}, // SkiaSharp
    {"sk_canvas_scale", sk_canvas_scale}, // SkiaSharp
    {"sk_canvas_set_matrix", sk_canvas_set_matrix}, // SkiaSharp
    {"sk_canvas_skew", sk_canvas_skew}, // SkiaSharp
    {"sk_canvas_translate", sk_canvas_translate}, // SkiaSharp
    {"sk_codec_destroy", sk_codec_destroy}, // SkiaSharp
    {"sk_codec_get_encoded_format", sk_codec_get_encoded_format}, // SkiaSharp
    {"sk_codec_get_frame_count", sk_codec_get_frame_count}, // SkiaSharp
    {"sk_codec_get_frame_info", sk_codec_get_frame_info}, // SkiaSharp
    {"sk_codec_get_frame_info_for_index", sk_codec_get_frame_info_for_index}, // SkiaSharp
    {"sk_codec_get_info", sk_codec_get_info}, // SkiaSharp
    {"sk_codec_get_origin", sk_codec_get_origin}, // SkiaSharp
    {"sk_codec_get_pixels", sk_codec_get_pixels}, // SkiaSharp
    {"sk_codec_get_repetition_count", sk_codec_get_repetition_count}, // SkiaSharp
    {"sk_codec_get_scaled_dimensions", sk_codec_get_scaled_dimensions}, // SkiaSharp
    {"sk_codec_get_scanline_order", sk_codec_get_scanline_order}, // SkiaSharp
    {"sk_codec_get_scanlines", sk_codec_get_scanlines}, // SkiaSharp
    {"sk_codec_get_valid_subset", sk_codec_get_valid_subset}, // SkiaSharp
    {"sk_codec_incremental_decode", sk_codec_incremental_decode}, // SkiaSharp
    {"sk_codec_min_buffered_bytes_needed", sk_codec_min_buffered_bytes_needed}, // SkiaSharp
    {"sk_codec_new_from_data", sk_codec_new_from_data}, // SkiaSharp
    {"sk_codec_new_from_stream", sk_codec_new_from_stream}, // SkiaSharp
    {"sk_codec_next_scanline", sk_codec_next_scanline}, // SkiaSharp
    {"sk_codec_output_scanline", sk_codec_output_scanline}, // SkiaSharp
    {"sk_codec_skip_scanlines", sk_codec_skip_scanlines}, // SkiaSharp
    {"sk_codec_start_incremental_decode", sk_codec_start_incremental_decode}, // SkiaSharp
    {"sk_codec_start_scanline_decode", sk_codec_start_scanline_decode}, // SkiaSharp
    {"sk_color4f_from_color", sk_color4f_from_color}, // SkiaSharp
    {"sk_color4f_to_color", sk_color4f_to_color}, // SkiaSharp
    {"sk_color_get_bit_shift", sk_color_get_bit_shift}, // SkiaSharp
    {"sk_color_premultiply", sk_color_premultiply}, // SkiaSharp
    {"sk_color_premultiply_array", sk_color_premultiply_array}, // SkiaSharp
    {"sk_color_unpremultiply", sk_color_unpremultiply}, // SkiaSharp
    {"sk_color_unpremultiply_array", sk_color_unpremultiply_array}, // SkiaSharp
    {"sk_colorfilter_new_color_matrix", sk_colorfilter_new_color_matrix}, // SkiaSharp
    {"sk_colorfilter_new_compose", sk_colorfilter_new_compose}, // SkiaSharp
    {"sk_colorfilter_new_high_contrast", sk_colorfilter_new_high_contrast}, // SkiaSharp
    {"sk_colorfilter_new_hsla_matrix", sk_colorfilter_new_hsla_matrix}, // SkiaSharp
    {"sk_colorfilter_new_lerp", sk_colorfilter_new_lerp}, // SkiaSharp
    {"sk_colorfilter_new_lighting", sk_colorfilter_new_lighting}, // SkiaSharp
    {"sk_colorfilter_new_linear_to_srgb_gamma", sk_colorfilter_new_linear_to_srgb_gamma}, // SkiaSharp
    {"sk_colorfilter_new_luma_color", sk_colorfilter_new_luma_color}, // SkiaSharp
    {"sk_colorfilter_new_mode", sk_colorfilter_new_mode}, // SkiaSharp
    {"sk_colorfilter_new_srgb_to_linear_gamma", sk_colorfilter_new_srgb_to_linear_gamma}, // SkiaSharp
    {"sk_colorfilter_new_table", sk_colorfilter_new_table}, // SkiaSharp
    {"sk_colorfilter_new_table_argb", sk_colorfilter_new_table_argb}, // SkiaSharp
    {"sk_colorfilter_unref", sk_colorfilter_unref}, // SkiaSharp
    {"sk_colorspace_equals", sk_colorspace_equals}, // SkiaSharp
    {"sk_colorspace_gamma_close_to_srgb", sk_colorspace_gamma_close_to_srgb}, // SkiaSharp
    {"sk_colorspace_gamma_is_linear", sk_colorspace_gamma_is_linear}, // SkiaSharp
    {"sk_colorspace_icc_profile_delete", sk_colorspace_icc_profile_delete}, // SkiaSharp
    {"sk_colorspace_icc_profile_get_buffer", sk_colorspace_icc_profile_get_buffer}, // SkiaSharp
    {"sk_colorspace_icc_profile_get_to_xyzd50", sk_colorspace_icc_profile_get_to_xyzd50}, // SkiaSharp
    {"sk_colorspace_icc_profile_new", sk_colorspace_icc_profile_new}, // SkiaSharp
    {"sk_colorspace_icc_profile_parse", sk_colorspace_icc_profile_parse}, // SkiaSharp
    {"sk_colorspace_is_numerical_transfer_fn", sk_colorspace_is_numerical_transfer_fn}, // SkiaSharp
    {"sk_colorspace_is_srgb", sk_colorspace_is_srgb}, // SkiaSharp
    {"sk_colorspace_make_linear_gamma", sk_colorspace_make_linear_gamma}, // SkiaSharp
    {"sk_colorspace_make_srgb_gamma", sk_colorspace_make_srgb_gamma}, // SkiaSharp
    {"sk_colorspace_new_icc", sk_colorspace_new_icc}, // SkiaSharp
    {"sk_colorspace_new_rgb", sk_colorspace_new_rgb}, // SkiaSharp
    {"sk_colorspace_new_srgb", sk_colorspace_new_srgb}, // SkiaSharp
    {"sk_colorspace_new_srgb_linear", sk_colorspace_new_srgb_linear}, // SkiaSharp
    {"sk_colorspace_primaries_to_xyzd50", sk_colorspace_primaries_to_xyzd50}, // SkiaSharp
    {"sk_colorspace_ref", sk_colorspace_ref}, // SkiaSharp
    {"sk_colorspace_to_profile", sk_colorspace_to_profile}, // SkiaSharp
    {"sk_colorspace_to_xyzd50", sk_colorspace_to_xyzd50}, // SkiaSharp
    {"sk_colorspace_transfer_fn_eval", sk_colorspace_transfer_fn_eval}, // SkiaSharp
    {"sk_colorspace_transfer_fn_invert", sk_colorspace_transfer_fn_invert}, // SkiaSharp
    {"sk_colorspace_transfer_fn_named_2dot2", sk_colorspace_transfer_fn_named_2dot2}, // SkiaSharp
    {"sk_colorspace_transfer_fn_named_hlg", sk_colorspace_transfer_fn_named_hlg}, // SkiaSharp
    {"sk_colorspace_transfer_fn_named_linear", sk_colorspace_transfer_fn_named_linear}, // SkiaSharp
    {"sk_colorspace_transfer_fn_named_pq", sk_colorspace_transfer_fn_named_pq}, // SkiaSharp
    {"sk_colorspace_transfer_fn_named_rec2020", sk_colorspace_transfer_fn_named_rec2020}, // SkiaSharp
    {"sk_colorspace_transfer_fn_named_srgb", sk_colorspace_transfer_fn_named_srgb}, // SkiaSharp
    {"sk_colorspace_unref", sk_colorspace_unref}, // SkiaSharp
    {"sk_colorspace_xyz_concat", sk_colorspace_xyz_concat}, // SkiaSharp
    {"sk_colorspace_xyz_invert", sk_colorspace_xyz_invert}, // SkiaSharp
    {"sk_colorspace_xyz_named_adobe_rgb", sk_colorspace_xyz_named_adobe_rgb}, // SkiaSharp
    {"sk_colorspace_xyz_named_display_p3", sk_colorspace_xyz_named_display_p3}, // SkiaSharp
    {"sk_colorspace_xyz_named_rec2020", sk_colorspace_xyz_named_rec2020}, // SkiaSharp
    {"sk_colorspace_xyz_named_srgb", sk_colorspace_xyz_named_srgb}, // SkiaSharp
    {"sk_colorspace_xyz_named_xyz", sk_colorspace_xyz_named_xyz}, // SkiaSharp
    {"sk_colortype_get_default_8888", sk_colortype_get_default_8888}, // SkiaSharp
    {"sk_compatpaint_clone", sk_compatpaint_clone}, // SkiaSharp
    {"sk_compatpaint_delete", sk_compatpaint_delete}, // SkiaSharp
    {"sk_compatpaint_get_filter_quality", sk_compatpaint_get_filter_quality}, // SkiaSharp
    {"sk_compatpaint_get_font", sk_compatpaint_get_font}, // SkiaSharp
    {"sk_compatpaint_get_lcd_render_text", sk_compatpaint_get_lcd_render_text}, // SkiaSharp
    {"sk_compatpaint_get_text_align", sk_compatpaint_get_text_align}, // SkiaSharp
    {"sk_compatpaint_get_text_encoding", sk_compatpaint_get_text_encoding}, // SkiaSharp
    {"sk_compatpaint_make_font", sk_compatpaint_make_font}, // SkiaSharp
    {"sk_compatpaint_new", sk_compatpaint_new}, // SkiaSharp
    {"sk_compatpaint_new_with_font", sk_compatpaint_new_with_font}, // SkiaSharp
    {"sk_compatpaint_reset", sk_compatpaint_reset}, // SkiaSharp
    {"sk_compatpaint_set_filter_quality", sk_compatpaint_set_filter_quality}, // SkiaSharp
    {"sk_compatpaint_set_is_antialias", sk_compatpaint_set_is_antialias}, // SkiaSharp
    {"sk_compatpaint_set_lcd_render_text", sk_compatpaint_set_lcd_render_text}, // SkiaSharp
    {"sk_compatpaint_set_text_align", sk_compatpaint_set_text_align}, // SkiaSharp
    {"sk_compatpaint_set_text_encoding", sk_compatpaint_set_text_encoding}, // SkiaSharp
    {"sk_data_get_bytes", sk_data_get_bytes}, // SkiaSharp
    {"sk_data_get_data", sk_data_get_data}, // SkiaSharp
    {"sk_data_get_size", sk_data_get_size}, // SkiaSharp
    {"sk_data_new_empty", sk_data_new_empty}, // SkiaSharp
    {"sk_data_new_from_file", sk_data_new_from_file}, // SkiaSharp
    {"sk_data_new_from_stream", sk_data_new_from_stream}, // SkiaSharp
    {"sk_data_new_subset", sk_data_new_subset}, // SkiaSharp
    {"sk_data_new_uninitialized", sk_data_new_uninitialized}, // SkiaSharp
    {"sk_data_new_with_copy", sk_data_new_with_copy}, // SkiaSharp
    {"sk_data_new_with_proc", sk_data_new_with_proc}, // SkiaSharp
    {"sk_data_ref", sk_data_ref}, // SkiaSharp
    {"sk_data_unref", sk_data_unref}, // SkiaSharp
    {"sk_document_abort", sk_document_abort}, // SkiaSharp
    {"sk_document_begin_page", sk_document_begin_page}, // SkiaSharp
    {"sk_document_close", sk_document_close}, // SkiaSharp
    {"sk_document_create_pdf_from_stream", sk_document_create_pdf_from_stream}, // SkiaSharp
    {"sk_document_create_pdf_from_stream_with_metadata", sk_document_create_pdf_from_stream_with_metadata}, // SkiaSharp
    {"sk_document_create_xps_from_stream", sk_document_create_xps_from_stream}, // SkiaSharp
    {"sk_document_end_page", sk_document_end_page}, // SkiaSharp
    {"sk_document_unref", sk_document_unref}, // SkiaSharp
    {"sk_drawable_approximate_bytes_used", sk_drawable_approximate_bytes_used}, // SkiaSharp
    {"sk_drawable_draw", sk_drawable_draw}, // SkiaSharp
    {"sk_drawable_get_bounds", sk_drawable_get_bounds}, // SkiaSharp
    {"sk_drawable_get_generation_id", sk_drawable_get_generation_id}, // SkiaSharp
    {"sk_drawable_new_picture_snapshot", sk_drawable_new_picture_snapshot}, // SkiaSharp
    {"sk_drawable_notify_drawing_changed", sk_drawable_notify_drawing_changed}, // SkiaSharp
    {"sk_drawable_unref", sk_drawable_unref}, // SkiaSharp
    {"sk_dynamicmemorywstream_copy_to", sk_dynamicmemorywstream_copy_to}, // SkiaSharp
    {"sk_dynamicmemorywstream_destroy", sk_dynamicmemorywstream_destroy}, // SkiaSharp
    {"sk_dynamicmemorywstream_detach_as_data", sk_dynamicmemorywstream_detach_as_data}, // SkiaSharp
    {"sk_dynamicmemorywstream_detach_as_stream", sk_dynamicmemorywstream_detach_as_stream}, // SkiaSharp
    {"sk_dynamicmemorywstream_new", sk_dynamicmemorywstream_new}, // SkiaSharp
    {"sk_dynamicmemorywstream_write_to_stream", sk_dynamicmemorywstream_write_to_stream}, // SkiaSharp
    {"sk_filestream_destroy", sk_filestream_destroy}, // SkiaSharp
    {"sk_filestream_is_valid", sk_filestream_is_valid}, // SkiaSharp
    {"sk_filestream_new", sk_filestream_new}, // SkiaSharp
    {"sk_filewstream_destroy", sk_filewstream_destroy}, // SkiaSharp
    {"sk_filewstream_is_valid", sk_filewstream_is_valid}, // SkiaSharp
    {"sk_filewstream_new", sk_filewstream_new}, // SkiaSharp
    {"sk_font_break_text", sk_font_break_text}, // SkiaSharp
    {"sk_font_delete", sk_font_delete}, // SkiaSharp
    {"sk_font_get_edging", sk_font_get_edging}, // SkiaSharp
    {"sk_font_get_hinting", sk_font_get_hinting}, // SkiaSharp
    {"sk_font_get_metrics", sk_font_get_metrics}, // SkiaSharp
    {"sk_font_get_path", sk_font_get_path}, // SkiaSharp
    {"sk_font_get_paths", sk_font_get_paths}, // SkiaSharp
    {"sk_font_get_pos", sk_font_get_pos}, // SkiaSharp
    {"sk_font_get_scale_x", sk_font_get_scale_x}, // SkiaSharp
    {"sk_font_get_size", sk_font_get_size}, // SkiaSharp
    {"sk_font_get_skew_x", sk_font_get_skew_x}, // SkiaSharp
    {"sk_font_get_typeface", sk_font_get_typeface}, // SkiaSharp
    {"sk_font_get_widths_bounds", sk_font_get_widths_bounds}, // SkiaSharp
    {"sk_font_get_xpos", sk_font_get_xpos}, // SkiaSharp
    {"sk_font_is_baseline_snap", sk_font_is_baseline_snap}, // SkiaSharp
    {"sk_font_is_embedded_bitmaps", sk_font_is_embedded_bitmaps}, // SkiaSharp
    {"sk_font_is_embolden", sk_font_is_embolden}, // SkiaSharp
    {"sk_font_is_force_auto_hinting", sk_font_is_force_auto_hinting}, // SkiaSharp
    {"sk_font_is_linear_metrics", sk_font_is_linear_metrics}, // SkiaSharp
    {"sk_font_is_subpixel", sk_font_is_subpixel}, // SkiaSharp
    {"sk_font_measure_text", sk_font_measure_text}, // SkiaSharp
    {"sk_font_measure_text_no_return", sk_font_measure_text_no_return}, // SkiaSharp
    {"sk_font_new", sk_font_new}, // SkiaSharp
    {"sk_font_new_with_values", sk_font_new_with_values}, // SkiaSharp
    {"sk_font_set_baseline_snap", sk_font_set_baseline_snap}, // SkiaSharp
    {"sk_font_set_edging", sk_font_set_edging}, // SkiaSharp
    {"sk_font_set_embedded_bitmaps", sk_font_set_embedded_bitmaps}, // SkiaSharp
    {"sk_font_set_embolden", sk_font_set_embolden}, // SkiaSharp
    {"sk_font_set_force_auto_hinting", sk_font_set_force_auto_hinting}, // SkiaSharp
    {"sk_font_set_hinting", sk_font_set_hinting}, // SkiaSharp
    {"sk_font_set_linear_metrics", sk_font_set_linear_metrics}, // SkiaSharp
    {"sk_font_set_scale_x", sk_font_set_scale_x}, // SkiaSharp
    {"sk_font_set_size", sk_font_set_size}, // SkiaSharp
    {"sk_font_set_skew_x", sk_font_set_skew_x}, // SkiaSharp
    {"sk_font_set_subpixel", sk_font_set_subpixel}, // SkiaSharp
    {"sk_font_set_typeface", sk_font_set_typeface}, // SkiaSharp
    {"sk_font_text_to_glyphs", sk_font_text_to_glyphs}, // SkiaSharp
    {"sk_font_unichar_to_glyph", sk_font_unichar_to_glyph}, // SkiaSharp
    {"sk_font_unichars_to_glyphs", sk_font_unichars_to_glyphs}, // SkiaSharp
    {"sk_fontmgr_count_families", sk_fontmgr_count_families}, // SkiaSharp
    {"sk_fontmgr_create_default", sk_fontmgr_create_default}, // SkiaSharp
    {"sk_fontmgr_create_from_data", sk_fontmgr_create_from_data}, // SkiaSharp
    {"sk_fontmgr_create_from_file", sk_fontmgr_create_from_file}, // SkiaSharp
    {"sk_fontmgr_create_from_stream", sk_fontmgr_create_from_stream}, // SkiaSharp
    {"sk_fontmgr_create_styleset", sk_fontmgr_create_styleset}, // SkiaSharp
    {"sk_fontmgr_get_family_name", sk_fontmgr_get_family_name}, // SkiaSharp
    {"sk_fontmgr_match_family", sk_fontmgr_match_family}, // SkiaSharp
    {"sk_fontmgr_match_family_style", sk_fontmgr_match_family_style}, // SkiaSharp
    {"sk_fontmgr_match_family_style_character", sk_fontmgr_match_family_style_character}, // SkiaSharp
    {"sk_fontmgr_ref_default", sk_fontmgr_ref_default}, // SkiaSharp
    {"sk_fontmgr_unref", sk_fontmgr_unref}, // SkiaSharp
    {"sk_fontstyle_delete", sk_fontstyle_delete}, // SkiaSharp
    {"sk_fontstyle_get_slant", sk_fontstyle_get_slant}, // SkiaSharp
    {"sk_fontstyle_get_weight", sk_fontstyle_get_weight}, // SkiaSharp
    {"sk_fontstyle_get_width", sk_fontstyle_get_width}, // SkiaSharp
    {"sk_fontstyle_new", sk_fontstyle_new}, // SkiaSharp
    {"sk_fontstyleset_create_empty", sk_fontstyleset_create_empty}, // SkiaSharp
    {"sk_fontstyleset_create_typeface", sk_fontstyleset_create_typeface}, // SkiaSharp
    {"sk_fontstyleset_get_count", sk_fontstyleset_get_count}, // SkiaSharp
    {"sk_fontstyleset_get_style", sk_fontstyleset_get_style}, // SkiaSharp
    {"sk_fontstyleset_match_style", sk_fontstyleset_match_style}, // SkiaSharp
    {"sk_fontstyleset_unref", sk_fontstyleset_unref}, // SkiaSharp
    {"sk_get_recording_context", sk_get_recording_context}, // SkiaSharp
    {"sk_get_surface", sk_get_surface}, // SkiaSharp
    {"sk_graphics_dump_memory_statistics", sk_graphics_dump_memory_statistics}, // SkiaSharp
    {"sk_graphics_get_font_cache_count_limit", sk_graphics_get_font_cache_count_limit}, // SkiaSharp
    {"sk_graphics_get_font_cache_count_used", sk_graphics_get_font_cache_count_used}, // SkiaSharp
    {"sk_graphics_get_font_cache_limit", sk_graphics_get_font_cache_limit}, // SkiaSharp
    {"sk_graphics_get_font_cache_used", sk_graphics_get_font_cache_used}, // SkiaSharp
    {"sk_graphics_get_resource_cache_single_allocation_byte_limit", sk_graphics_get_resource_cache_single_allocation_byte_limit}, // SkiaSharp
    {"sk_graphics_get_resource_cache_total_byte_limit", sk_graphics_get_resource_cache_total_byte_limit}, // SkiaSharp
    {"sk_graphics_get_resource_cache_total_bytes_used", sk_graphics_get_resource_cache_total_bytes_used}, // SkiaSharp
    {"sk_graphics_init", sk_graphics_init}, // SkiaSharp
    {"sk_graphics_purge_all_caches", sk_graphics_purge_all_caches}, // SkiaSharp
    {"sk_graphics_purge_font_cache", sk_graphics_purge_font_cache}, // SkiaSharp
    {"sk_graphics_purge_resource_cache", sk_graphics_purge_resource_cache}, // SkiaSharp
    {"sk_graphics_set_font_cache_count_limit", sk_graphics_set_font_cache_count_limit}, // SkiaSharp
    {"sk_graphics_set_font_cache_limit", sk_graphics_set_font_cache_limit}, // SkiaSharp
    {"sk_graphics_set_resource_cache_single_allocation_byte_limit", sk_graphics_set_resource_cache_single_allocation_byte_limit}, // SkiaSharp
    {"sk_graphics_set_resource_cache_total_byte_limit", sk_graphics_set_resource_cache_total_byte_limit}, // SkiaSharp
    {"sk_image_get_alpha_type", sk_image_get_alpha_type}, // SkiaSharp
    {"sk_image_get_color_type", sk_image_get_color_type}, // SkiaSharp
    {"sk_image_get_colorspace", sk_image_get_colorspace}, // SkiaSharp
    {"sk_image_get_height", sk_image_get_height}, // SkiaSharp
    {"sk_image_get_unique_id", sk_image_get_unique_id}, // SkiaSharp
    {"sk_image_get_width", sk_image_get_width}, // SkiaSharp
    {"sk_image_is_alpha_only", sk_image_is_alpha_only}, // SkiaSharp
    {"sk_image_is_lazy_generated", sk_image_is_lazy_generated}, // SkiaSharp
    {"sk_image_is_texture_backed", sk_image_is_texture_backed}, // SkiaSharp
    {"sk_image_is_valid", sk_image_is_valid}, // SkiaSharp
    {"sk_image_make_non_texture_image", sk_image_make_non_texture_image}, // SkiaSharp
    {"sk_image_make_raster_image", sk_image_make_raster_image}, // SkiaSharp
    {"sk_image_make_raw_shader", sk_image_make_raw_shader}, // SkiaSharp
    {"sk_image_make_shader", sk_image_make_shader}, // SkiaSharp
    {"sk_image_make_subset", sk_image_make_subset}, // SkiaSharp
    {"sk_image_make_subset_raster", sk_image_make_subset_raster}, // SkiaSharp
    {"sk_image_make_texture_image", sk_image_make_texture_image}, // SkiaSharp
    {"sk_image_make_with_filter", sk_image_make_with_filter}, // SkiaSharp
    {"sk_image_make_with_filter_raster", sk_image_make_with_filter_raster}, // SkiaSharp
    {"sk_image_new_from_adopted_texture", sk_image_new_from_adopted_texture}, // SkiaSharp
    {"sk_image_new_from_bitmap", sk_image_new_from_bitmap}, // SkiaSharp
    {"sk_image_new_from_encoded", sk_image_new_from_encoded}, // SkiaSharp
    {"sk_image_new_from_picture", sk_image_new_from_picture}, // SkiaSharp
    {"sk_image_new_from_texture", sk_image_new_from_texture}, // SkiaSharp
    {"sk_image_new_raster", sk_image_new_raster}, // SkiaSharp
    {"sk_image_new_raster_copy", sk_image_new_raster_copy}, // SkiaSharp
    {"sk_image_new_raster_copy_with_pixmap", sk_image_new_raster_copy_with_pixmap}, // SkiaSharp
    {"sk_image_new_raster_data", sk_image_new_raster_data}, // SkiaSharp
    {"sk_image_peek_pixels", sk_image_peek_pixels}, // SkiaSharp
    {"sk_image_read_pixels", sk_image_read_pixels}, // SkiaSharp
    {"sk_image_read_pixels_into_pixmap", sk_image_read_pixels_into_pixmap}, // SkiaSharp
    {"sk_image_ref", sk_image_ref}, // SkiaSharp
    {"sk_image_ref_encoded", sk_image_ref_encoded}, // SkiaSharp
    {"sk_image_scale_pixels", sk_image_scale_pixels}, // SkiaSharp
    {"sk_image_unref", sk_image_unref}, // SkiaSharp
    {"sk_imagefilter_new_arithmetic", sk_imagefilter_new_arithmetic}, // SkiaSharp
    {"sk_imagefilter_new_blend", sk_imagefilter_new_blend}, // SkiaSharp
    {"sk_imagefilter_new_blender", sk_imagefilter_new_blender}, // SkiaSharp
    {"sk_imagefilter_new_blur", sk_imagefilter_new_blur}, // SkiaSharp
    {"sk_imagefilter_new_color_filter", sk_imagefilter_new_color_filter}, // SkiaSharp
    {"sk_imagefilter_new_compose", sk_imagefilter_new_compose}, // SkiaSharp
    {"sk_imagefilter_new_dilate", sk_imagefilter_new_dilate}, // SkiaSharp
    {"sk_imagefilter_new_displacement_map_effect", sk_imagefilter_new_displacement_map_effect}, // SkiaSharp
    {"sk_imagefilter_new_distant_lit_diffuse", sk_imagefilter_new_distant_lit_diffuse}, // SkiaSharp
    {"sk_imagefilter_new_distant_lit_specular", sk_imagefilter_new_distant_lit_specular}, // SkiaSharp
    {"sk_imagefilter_new_drop_shadow", sk_imagefilter_new_drop_shadow}, // SkiaSharp
    {"sk_imagefilter_new_drop_shadow_only", sk_imagefilter_new_drop_shadow_only}, // SkiaSharp
    {"sk_imagefilter_new_erode", sk_imagefilter_new_erode}, // SkiaSharp
    {"sk_imagefilter_new_image", sk_imagefilter_new_image}, // SkiaSharp
    {"sk_imagefilter_new_image_simple", sk_imagefilter_new_image_simple}, // SkiaSharp
    {"sk_imagefilter_new_magnifier", sk_imagefilter_new_magnifier}, // SkiaSharp
    {"sk_imagefilter_new_matrix_convolution", sk_imagefilter_new_matrix_convolution}, // SkiaSharp
    {"sk_imagefilter_new_matrix_transform", sk_imagefilter_new_matrix_transform}, // SkiaSharp
    {"sk_imagefilter_new_merge", sk_imagefilter_new_merge}, // SkiaSharp
    {"sk_imagefilter_new_merge_simple", sk_imagefilter_new_merge_simple}, // SkiaSharp
    {"sk_imagefilter_new_offset", sk_imagefilter_new_offset}, // SkiaSharp
    {"sk_imagefilter_new_picture", sk_imagefilter_new_picture}, // SkiaSharp
    {"sk_imagefilter_new_picture_with_rect", sk_imagefilter_new_picture_with_rect}, // SkiaSharp
    {"sk_imagefilter_new_point_lit_diffuse", sk_imagefilter_new_point_lit_diffuse}, // SkiaSharp
    {"sk_imagefilter_new_point_lit_specular", sk_imagefilter_new_point_lit_specular}, // SkiaSharp
    {"sk_imagefilter_new_shader", sk_imagefilter_new_shader}, // SkiaSharp
    {"sk_imagefilter_new_spot_lit_diffuse", sk_imagefilter_new_spot_lit_diffuse}, // SkiaSharp
    {"sk_imagefilter_new_spot_lit_specular", sk_imagefilter_new_spot_lit_specular}, // SkiaSharp
    {"sk_imagefilter_new_tile", sk_imagefilter_new_tile}, // SkiaSharp
    {"sk_imagefilter_unref", sk_imagefilter_unref}, // SkiaSharp
    {"sk_jpegencoder_encode", sk_jpegencoder_encode}, // SkiaSharp
    {"sk_linker_keep_alive", sk_linker_keep_alive}, // SkiaSharp
    {"sk_manageddrawable_new", sk_manageddrawable_new}, // SkiaSharp
    {"sk_manageddrawable_set_procs", sk_manageddrawable_set_procs}, // SkiaSharp
    {"sk_manageddrawable_unref", sk_manageddrawable_unref}, // SkiaSharp
    {"sk_managedstream_destroy", sk_managedstream_destroy}, // SkiaSharp
    {"sk_managedstream_new", sk_managedstream_new}, // SkiaSharp
    {"sk_managedstream_set_procs", sk_managedstream_set_procs}, // SkiaSharp
    {"sk_managedtracememorydump_delete", sk_managedtracememorydump_delete}, // SkiaSharp
    {"sk_managedtracememorydump_new", sk_managedtracememorydump_new}, // SkiaSharp
    {"sk_managedtracememorydump_set_procs", sk_managedtracememorydump_set_procs}, // SkiaSharp
    {"sk_managedwstream_destroy", sk_managedwstream_destroy}, // SkiaSharp
    {"sk_managedwstream_new", sk_managedwstream_new}, // SkiaSharp
    {"sk_managedwstream_set_procs", sk_managedwstream_set_procs}, // SkiaSharp
    {"sk_maskfilter_new_blur", sk_maskfilter_new_blur}, // SkiaSharp
    {"sk_maskfilter_new_blur_with_flags", sk_maskfilter_new_blur_with_flags}, // SkiaSharp
    {"sk_maskfilter_new_clip", sk_maskfilter_new_clip}, // SkiaSharp
    {"sk_maskfilter_new_gamma", sk_maskfilter_new_gamma}, // SkiaSharp
    {"sk_maskfilter_new_shader", sk_maskfilter_new_shader}, // SkiaSharp
    {"sk_maskfilter_new_table", sk_maskfilter_new_table}, // SkiaSharp
    {"sk_maskfilter_ref", sk_maskfilter_ref}, // SkiaSharp
    {"sk_maskfilter_unref", sk_maskfilter_unref}, // SkiaSharp
    {"sk_matrix_concat", sk_matrix_concat}, // SkiaSharp
    {"sk_matrix_map_points", sk_matrix_map_points}, // SkiaSharp
    {"sk_matrix_map_radius", sk_matrix_map_radius}, // SkiaSharp
    {"sk_matrix_map_rect", sk_matrix_map_rect}, // SkiaSharp
    {"sk_matrix_map_vector", sk_matrix_map_vector}, // SkiaSharp
    {"sk_matrix_map_vectors", sk_matrix_map_vectors}, // SkiaSharp
    {"sk_matrix_map_xy", sk_matrix_map_xy}, // SkiaSharp
    {"sk_matrix_post_concat", sk_matrix_post_concat}, // SkiaSharp
    {"sk_matrix_pre_concat", sk_matrix_pre_concat}, // SkiaSharp
    {"sk_matrix_try_invert", sk_matrix_try_invert}, // SkiaSharp
    {"sk_memorystream_destroy", sk_memorystream_destroy}, // SkiaSharp
    {"sk_memorystream_new", sk_memorystream_new}, // SkiaSharp
    {"sk_memorystream_new_with_data", sk_memorystream_new_with_data}, // SkiaSharp
    {"sk_memorystream_new_with_length", sk_memorystream_new_with_length}, // SkiaSharp
    {"sk_memorystream_new_with_skdata", sk_memorystream_new_with_skdata}, // SkiaSharp
    {"sk_memorystream_set_memory", sk_memorystream_set_memory}, // SkiaSharp
    {"sk_nodraw_canvas_destroy", sk_nodraw_canvas_destroy}, // SkiaSharp
    {"sk_nodraw_canvas_new", sk_nodraw_canvas_new}, // SkiaSharp
    {"sk_nvrefcnt_get_ref_count", sk_nvrefcnt_get_ref_count}, // SkiaSharp
    {"sk_nvrefcnt_safe_ref", sk_nvrefcnt_safe_ref}, // SkiaSharp
    {"sk_nvrefcnt_safe_unref", sk_nvrefcnt_safe_unref}, // SkiaSharp
    {"sk_nvrefcnt_unique", sk_nvrefcnt_unique}, // SkiaSharp
    {"sk_nway_canvas_add_canvas", sk_nway_canvas_add_canvas}, // SkiaSharp
    {"sk_nway_canvas_destroy", sk_nway_canvas_destroy}, // SkiaSharp
    {"sk_nway_canvas_new", sk_nway_canvas_new}, // SkiaSharp
    {"sk_nway_canvas_remove_all", sk_nway_canvas_remove_all}, // SkiaSharp
    {"sk_nway_canvas_remove_canvas", sk_nway_canvas_remove_canvas}, // SkiaSharp
    {"sk_opbuilder_add", sk_opbuilder_add}, // SkiaSharp
    {"sk_opbuilder_destroy", sk_opbuilder_destroy}, // SkiaSharp
    {"sk_opbuilder_new", sk_opbuilder_new}, // SkiaSharp
    {"sk_opbuilder_resolve", sk_opbuilder_resolve}, // SkiaSharp
    {"sk_overdraw_canvas_destroy", sk_overdraw_canvas_destroy}, // SkiaSharp
    {"sk_overdraw_canvas_new", sk_overdraw_canvas_new}, // SkiaSharp
    {"sk_paint_clone", sk_paint_clone}, // SkiaSharp
    {"sk_paint_delete", sk_paint_delete}, // SkiaSharp
    {"sk_paint_get_blender", sk_paint_get_blender}, // SkiaSharp
    {"sk_paint_get_blendmode", sk_paint_get_blendmode}, // SkiaSharp
    {"sk_paint_get_color", sk_paint_get_color}, // SkiaSharp
    {"sk_paint_get_color4f", sk_paint_get_color4f}, // SkiaSharp
    {"sk_paint_get_colorfilter", sk_paint_get_colorfilter}, // SkiaSharp
    {"sk_paint_get_fill_path", sk_paint_get_fill_path}, // SkiaSharp
    {"sk_paint_get_imagefilter", sk_paint_get_imagefilter}, // SkiaSharp
    {"sk_paint_get_maskfilter", sk_paint_get_maskfilter}, // SkiaSharp
    {"sk_paint_get_path_effect", sk_paint_get_path_effect}, // SkiaSharp
    {"sk_paint_get_shader", sk_paint_get_shader}, // SkiaSharp
    {"sk_paint_get_stroke_cap", sk_paint_get_stroke_cap}, // SkiaSharp
    {"sk_paint_get_stroke_join", sk_paint_get_stroke_join}, // SkiaSharp
    {"sk_paint_get_stroke_miter", sk_paint_get_stroke_miter}, // SkiaSharp
    {"sk_paint_get_stroke_width", sk_paint_get_stroke_width}, // SkiaSharp
    {"sk_paint_get_style", sk_paint_get_style}, // SkiaSharp
    {"sk_paint_is_antialias", sk_paint_is_antialias}, // SkiaSharp
    {"sk_paint_is_dither", sk_paint_is_dither}, // SkiaSharp
    {"sk_paint_new", sk_paint_new}, // SkiaSharp
    {"sk_paint_reset", sk_paint_reset}, // SkiaSharp
    {"sk_paint_set_antialias", sk_paint_set_antialias}, // SkiaSharp
    {"sk_paint_set_blender", sk_paint_set_blender}, // SkiaSharp
    {"sk_paint_set_blendmode", sk_paint_set_blendmode}, // SkiaSharp
    {"sk_paint_set_color", sk_paint_set_color}, // SkiaSharp
    {"sk_paint_set_color4f", sk_paint_set_color4f}, // SkiaSharp
    {"sk_paint_set_colorfilter", sk_paint_set_colorfilter}, // SkiaSharp
    {"sk_paint_set_dither", sk_paint_set_dither}, // SkiaSharp
    {"sk_paint_set_imagefilter", sk_paint_set_imagefilter}, // SkiaSharp
    {"sk_paint_set_maskfilter", sk_paint_set_maskfilter}, // SkiaSharp
    {"sk_paint_set_path_effect", sk_paint_set_path_effect}, // SkiaSharp
    {"sk_paint_set_shader", sk_paint_set_shader}, // SkiaSharp
    {"sk_paint_set_stroke_cap", sk_paint_set_stroke_cap}, // SkiaSharp
    {"sk_paint_set_stroke_join", sk_paint_set_stroke_join}, // SkiaSharp
    {"sk_paint_set_stroke_miter", sk_paint_set_stroke_miter}, // SkiaSharp
    {"sk_paint_set_stroke_width", sk_paint_set_stroke_width}, // SkiaSharp
    {"sk_paint_set_style", sk_paint_set_style}, // SkiaSharp
    {"sk_path_add_arc", sk_path_add_arc}, // SkiaSharp
    {"sk_path_add_circle", sk_path_add_circle}, // SkiaSharp
    {"sk_path_add_oval", sk_path_add_oval}, // SkiaSharp
    {"sk_path_add_path", sk_path_add_path}, // SkiaSharp
    {"sk_path_add_path_matrix", sk_path_add_path_matrix}, // SkiaSharp
    {"sk_path_add_path_offset", sk_path_add_path_offset}, // SkiaSharp
    {"sk_path_add_path_reverse", sk_path_add_path_reverse}, // SkiaSharp
    {"sk_path_add_poly", sk_path_add_poly}, // SkiaSharp
    {"sk_path_add_rect", sk_path_add_rect}, // SkiaSharp
    {"sk_path_add_rect_start", sk_path_add_rect_start}, // SkiaSharp
    {"sk_path_add_rounded_rect", sk_path_add_rounded_rect}, // SkiaSharp
    {"sk_path_add_rrect", sk_path_add_rrect}, // SkiaSharp
    {"sk_path_add_rrect_start", sk_path_add_rrect_start}, // SkiaSharp
    {"sk_path_arc_to", sk_path_arc_to}, // SkiaSharp
    {"sk_path_arc_to_with_oval", sk_path_arc_to_with_oval}, // SkiaSharp
    {"sk_path_arc_to_with_points", sk_path_arc_to_with_points}, // SkiaSharp
    {"sk_path_clone", sk_path_clone}, // SkiaSharp
    {"sk_path_close", sk_path_close}, // SkiaSharp
    {"sk_path_compute_tight_bounds", sk_path_compute_tight_bounds}, // SkiaSharp
    {"sk_path_conic_to", sk_path_conic_to}, // SkiaSharp
    {"sk_path_contains", sk_path_contains}, // SkiaSharp
    {"sk_path_convert_conic_to_quads", sk_path_convert_conic_to_quads}, // SkiaSharp
    {"sk_path_count_points", sk_path_count_points}, // SkiaSharp
    {"sk_path_count_verbs", sk_path_count_verbs}, // SkiaSharp
    {"sk_path_create_iter", sk_path_create_iter}, // SkiaSharp
    {"sk_path_create_rawiter", sk_path_create_rawiter}, // SkiaSharp
    {"sk_path_cubic_to", sk_path_cubic_to}, // SkiaSharp
    {"sk_path_delete", sk_path_delete}, // SkiaSharp
    {"sk_path_effect_create_1d_path", sk_path_effect_create_1d_path}, // SkiaSharp
    {"sk_path_effect_create_2d_line", sk_path_effect_create_2d_line}, // SkiaSharp
    {"sk_path_effect_create_2d_path", sk_path_effect_create_2d_path}, // SkiaSharp
    {"sk_path_effect_create_compose", sk_path_effect_create_compose}, // SkiaSharp
    {"sk_path_effect_create_corner", sk_path_effect_create_corner}, // SkiaSharp
    {"sk_path_effect_create_dash", sk_path_effect_create_dash}, // SkiaSharp
    {"sk_path_effect_create_discrete", sk_path_effect_create_discrete}, // SkiaSharp
    {"sk_path_effect_create_sum", sk_path_effect_create_sum}, // SkiaSharp
    {"sk_path_effect_create_trim", sk_path_effect_create_trim}, // SkiaSharp
    {"sk_path_effect_unref", sk_path_effect_unref}, // SkiaSharp
    {"sk_path_get_bounds", sk_path_get_bounds}, // SkiaSharp
    {"sk_path_get_filltype", sk_path_get_filltype}, // SkiaSharp
    {"sk_path_get_last_point", sk_path_get_last_point}, // SkiaSharp
    {"sk_path_get_point", sk_path_get_point}, // SkiaSharp
    {"sk_path_get_points", sk_path_get_points}, // SkiaSharp
    {"sk_path_get_segment_masks", sk_path_get_segment_masks}, // SkiaSharp
    {"sk_path_is_convex", sk_path_is_convex}, // SkiaSharp
    {"sk_path_is_line", sk_path_is_line}, // SkiaSharp
    {"sk_path_is_oval", sk_path_is_oval}, // SkiaSharp
    {"sk_path_is_rect", sk_path_is_rect}, // SkiaSharp
    {"sk_path_is_rrect", sk_path_is_rrect}, // SkiaSharp
    {"sk_path_iter_conic_weight", sk_path_iter_conic_weight}, // SkiaSharp
    {"sk_path_iter_destroy", sk_path_iter_destroy}, // SkiaSharp
    {"sk_path_iter_is_close_line", sk_path_iter_is_close_line}, // SkiaSharp
    {"sk_path_iter_is_closed_contour", sk_path_iter_is_closed_contour}, // SkiaSharp
    {"sk_path_iter_next", sk_path_iter_next}, // SkiaSharp
    {"sk_path_line_to", sk_path_line_to}, // SkiaSharp
    {"sk_path_move_to", sk_path_move_to}, // SkiaSharp
    {"sk_path_new", sk_path_new}, // SkiaSharp
    {"sk_path_parse_svg_string", sk_path_parse_svg_string}, // SkiaSharp
    {"sk_path_quad_to", sk_path_quad_to}, // SkiaSharp
    {"sk_path_rarc_to", sk_path_rarc_to}, // SkiaSharp
    {"sk_path_rawiter_conic_weight", sk_path_rawiter_conic_weight}, // SkiaSharp
    {"sk_path_rawiter_destroy", sk_path_rawiter_destroy}, // SkiaSharp
    {"sk_path_rawiter_next", sk_path_rawiter_next}, // SkiaSharp
    {"sk_path_rawiter_peek", sk_path_rawiter_peek}, // SkiaSharp
    {"sk_path_rconic_to", sk_path_rconic_to}, // SkiaSharp
    {"sk_path_rcubic_to", sk_path_rcubic_to}, // SkiaSharp
    {"sk_path_reset", sk_path_reset}, // SkiaSharp
    {"sk_path_rewind", sk_path_rewind}, // SkiaSharp
    {"sk_path_rline_to", sk_path_rline_to}, // SkiaSharp
    {"sk_path_rmove_to", sk_path_rmove_to}, // SkiaSharp
    {"sk_path_rquad_to", sk_path_rquad_to}, // SkiaSharp
    {"sk_path_set_filltype", sk_path_set_filltype}, // SkiaSharp
    {"sk_path_to_svg_string", sk_path_to_svg_string}, // SkiaSharp
    {"sk_path_transform", sk_path_transform}, // SkiaSharp
    {"sk_path_transform_to_dest", sk_path_transform_to_dest}, // SkiaSharp
    {"sk_pathmeasure_destroy", sk_pathmeasure_destroy}, // SkiaSharp
    {"sk_pathmeasure_get_length", sk_pathmeasure_get_length}, // SkiaSharp
    {"sk_pathmeasure_get_matrix", sk_pathmeasure_get_matrix}, // SkiaSharp
    {"sk_pathmeasure_get_pos_tan", sk_pathmeasure_get_pos_tan}, // SkiaSharp
    {"sk_pathmeasure_get_segment", sk_pathmeasure_get_segment}, // SkiaSharp
    {"sk_pathmeasure_is_closed", sk_pathmeasure_is_closed}, // SkiaSharp
    {"sk_pathmeasure_new", sk_pathmeasure_new}, // SkiaSharp
    {"sk_pathmeasure_new_with_path", sk_pathmeasure_new_with_path}, // SkiaSharp
    {"sk_pathmeasure_next_contour", sk_pathmeasure_next_contour}, // SkiaSharp
    {"sk_pathmeasure_set_path", sk_pathmeasure_set_path}, // SkiaSharp
    {"sk_pathop_as_winding", sk_pathop_as_winding}, // SkiaSharp
    {"sk_pathop_op", sk_pathop_op}, // SkiaSharp
    {"sk_pathop_simplify", sk_pathop_simplify}, // SkiaSharp
    {"sk_pathop_tight_bounds", sk_pathop_tight_bounds}, // SkiaSharp
    {"sk_picture_approximate_bytes_used", sk_picture_approximate_bytes_used}, // SkiaSharp
    {"sk_picture_approximate_op_count", sk_picture_approximate_op_count}, // SkiaSharp
    {"sk_picture_deserialize_from_data", sk_picture_deserialize_from_data}, // SkiaSharp
    {"sk_picture_deserialize_from_memory", sk_picture_deserialize_from_memory}, // SkiaSharp
    {"sk_picture_deserialize_from_stream", sk_picture_deserialize_from_stream}, // SkiaSharp
    {"sk_picture_get_cull_rect", sk_picture_get_cull_rect}, // SkiaSharp
    {"sk_picture_get_recording_canvas", sk_picture_get_recording_canvas}, // SkiaSharp
    {"sk_picture_get_unique_id", sk_picture_get_unique_id}, // SkiaSharp
    {"sk_picture_make_shader", sk_picture_make_shader}, // SkiaSharp
    {"sk_picture_playback", sk_picture_playback}, // SkiaSharp
    {"sk_picture_recorder_begin_recording", sk_picture_recorder_begin_recording}, // SkiaSharp
    {"sk_picture_recorder_begin_recording_with_bbh_factory", sk_picture_recorder_begin_recording_with_bbh_factory}, // SkiaSharp
    {"sk_picture_recorder_delete", sk_picture_recorder_delete}, // SkiaSharp
    {"sk_picture_recorder_end_recording", sk_picture_recorder_end_recording}, // SkiaSharp
    {"sk_picture_recorder_end_recording_as_drawable", sk_picture_recorder_end_recording_as_drawable}, // SkiaSharp
    {"sk_picture_recorder_new", sk_picture_recorder_new}, // SkiaSharp
    {"sk_picture_ref", sk_picture_ref}, // SkiaSharp
    {"sk_picture_serialize_to_data", sk_picture_serialize_to_data}, // SkiaSharp
    {"sk_picture_serialize_to_stream", sk_picture_serialize_to_stream}, // SkiaSharp
    {"sk_picture_unref", sk_picture_unref}, // SkiaSharp
    {"sk_pixmap_compute_is_opaque", sk_pixmap_compute_is_opaque}, // SkiaSharp
    {"sk_pixmap_destructor", sk_pixmap_destructor}, // SkiaSharp
    {"sk_pixmap_erase_color", sk_pixmap_erase_color}, // SkiaSharp
    {"sk_pixmap_erase_color4f", sk_pixmap_erase_color4f}, // SkiaSharp
    {"sk_pixmap_extract_subset", sk_pixmap_extract_subset}, // SkiaSharp
    {"sk_pixmap_get_colorspace", sk_pixmap_get_colorspace}, // SkiaSharp
    {"sk_pixmap_get_info", sk_pixmap_get_info}, // SkiaSharp
    {"sk_pixmap_get_pixel_alphaf", sk_pixmap_get_pixel_alphaf}, // SkiaSharp
    {"sk_pixmap_get_pixel_color", sk_pixmap_get_pixel_color}, // SkiaSharp
    {"sk_pixmap_get_pixel_color4f", sk_pixmap_get_pixel_color4f}, // SkiaSharp
    {"sk_pixmap_get_row_bytes", sk_pixmap_get_row_bytes}, // SkiaSharp
    {"sk_pixmap_get_writable_addr", sk_pixmap_get_writable_addr}, // SkiaSharp
    {"sk_pixmap_get_writeable_addr_with_xy", sk_pixmap_get_writeable_addr_with_xy}, // SkiaSharp
    {"sk_pixmap_new", sk_pixmap_new}, // SkiaSharp
    {"sk_pixmap_new_with_params", sk_pixmap_new_with_params}, // SkiaSharp
    {"sk_pixmap_read_pixels", sk_pixmap_read_pixels}, // SkiaSharp
    {"sk_pixmap_reset", sk_pixmap_reset}, // SkiaSharp
    {"sk_pixmap_reset_with_params", sk_pixmap_reset_with_params}, // SkiaSharp
    {"sk_pixmap_scale_pixels", sk_pixmap_scale_pixels}, // SkiaSharp
    {"sk_pixmap_set_colorspace", sk_pixmap_set_colorspace}, // SkiaSharp
    {"sk_pngencoder_encode", sk_pngencoder_encode}, // SkiaSharp
    {"sk_refcnt_get_ref_count", sk_refcnt_get_ref_count}, // SkiaSharp
    {"sk_refcnt_safe_ref", sk_refcnt_safe_ref}, // SkiaSharp
    {"sk_refcnt_safe_unref", sk_refcnt_safe_unref}, // SkiaSharp
    {"sk_refcnt_unique", sk_refcnt_unique}, // SkiaSharp
    {"sk_region_cliperator_delete", sk_region_cliperator_delete}, // SkiaSharp
    {"sk_region_cliperator_done", sk_region_cliperator_done}, // SkiaSharp
    {"sk_region_cliperator_new", sk_region_cliperator_new}, // SkiaSharp
    {"sk_region_cliperator_next", sk_region_cliperator_next}, // SkiaSharp
    {"sk_region_cliperator_rect", sk_region_cliperator_rect}, // SkiaSharp
    {"sk_region_contains", sk_region_contains}, // SkiaSharp
    {"sk_region_contains_point", sk_region_contains_point}, // SkiaSharp
    {"sk_region_contains_rect", sk_region_contains_rect}, // SkiaSharp
    {"sk_region_delete", sk_region_delete}, // SkiaSharp
    {"sk_region_get_boundary_path", sk_region_get_boundary_path}, // SkiaSharp
    {"sk_region_get_bounds", sk_region_get_bounds}, // SkiaSharp
    {"sk_region_intersects", sk_region_intersects}, // SkiaSharp
    {"sk_region_intersects_rect", sk_region_intersects_rect}, // SkiaSharp
    {"sk_region_is_complex", sk_region_is_complex}, // SkiaSharp
    {"sk_region_is_empty", sk_region_is_empty}, // SkiaSharp
    {"sk_region_is_rect", sk_region_is_rect}, // SkiaSharp
    {"sk_region_iterator_delete", sk_region_iterator_delete}, // SkiaSharp
    {"sk_region_iterator_done", sk_region_iterator_done}, // SkiaSharp
    {"sk_region_iterator_new", sk_region_iterator_new}, // SkiaSharp
    {"sk_region_iterator_next", sk_region_iterator_next}, // SkiaSharp
    {"sk_region_iterator_rect", sk_region_iterator_rect}, // SkiaSharp
    {"sk_region_iterator_rewind", sk_region_iterator_rewind}, // SkiaSharp
    {"sk_region_new", sk_region_new}, // SkiaSharp
    {"sk_region_op", sk_region_op}, // SkiaSharp
    {"sk_region_op_rect", sk_region_op_rect}, // SkiaSharp
    {"sk_region_quick_contains", sk_region_quick_contains}, // SkiaSharp
    {"sk_region_quick_reject", sk_region_quick_reject}, // SkiaSharp
    {"sk_region_quick_reject_rect", sk_region_quick_reject_rect}, // SkiaSharp
    {"sk_region_set_empty", sk_region_set_empty}, // SkiaSharp
    {"sk_region_set_path", sk_region_set_path}, // SkiaSharp
    {"sk_region_set_rect", sk_region_set_rect}, // SkiaSharp
    {"sk_region_set_rects", sk_region_set_rects}, // SkiaSharp
    {"sk_region_set_region", sk_region_set_region}, // SkiaSharp
    {"sk_region_spanerator_delete", sk_region_spanerator_delete}, // SkiaSharp
    {"sk_region_spanerator_new", sk_region_spanerator_new}, // SkiaSharp
    {"sk_region_spanerator_next", sk_region_spanerator_next}, // SkiaSharp
    {"sk_region_translate", sk_region_translate}, // SkiaSharp
    {"sk_rrect_contains", sk_rrect_contains}, // SkiaSharp
    {"sk_rrect_delete", sk_rrect_delete}, // SkiaSharp
    {"sk_rrect_get_height", sk_rrect_get_height}, // SkiaSharp
    {"sk_rrect_get_radii", sk_rrect_get_radii}, // SkiaSharp
    {"sk_rrect_get_rect", sk_rrect_get_rect}, // SkiaSharp
    {"sk_rrect_get_type", sk_rrect_get_type}, // SkiaSharp
    {"sk_rrect_get_width", sk_rrect_get_width}, // SkiaSharp
    {"sk_rrect_inset", sk_rrect_inset}, // SkiaSharp
    {"sk_rrect_is_valid", sk_rrect_is_valid}, // SkiaSharp
    {"sk_rrect_new", sk_rrect_new}, // SkiaSharp
    {"sk_rrect_new_copy", sk_rrect_new_copy}, // SkiaSharp
    {"sk_rrect_offset", sk_rrect_offset}, // SkiaSharp
    {"sk_rrect_outset", sk_rrect_outset}, // SkiaSharp
    {"sk_rrect_set_empty", sk_rrect_set_empty}, // SkiaSharp
    {"sk_rrect_set_nine_patch", sk_rrect_set_nine_patch}, // SkiaSharp
    {"sk_rrect_set_oval", sk_rrect_set_oval}, // SkiaSharp
    {"sk_rrect_set_rect", sk_rrect_set_rect}, // SkiaSharp
    {"sk_rrect_set_rect_radii", sk_rrect_set_rect_radii}, // SkiaSharp
    {"sk_rrect_set_rect_xy", sk_rrect_set_rect_xy}, // SkiaSharp
    {"sk_rrect_transform", sk_rrect_transform}, // SkiaSharp
    {"sk_rtree_factory_delete", sk_rtree_factory_delete}, // SkiaSharp
    {"sk_rtree_factory_new", sk_rtree_factory_new}, // SkiaSharp
    {"sk_runtimeeffect_get_child_from_index", sk_runtimeeffect_get_child_from_index}, // SkiaSharp
    {"sk_runtimeeffect_get_child_from_name", sk_runtimeeffect_get_child_from_name}, // SkiaSharp
    {"sk_runtimeeffect_get_child_name", sk_runtimeeffect_get_child_name}, // SkiaSharp
    {"sk_runtimeeffect_get_children_size", sk_runtimeeffect_get_children_size}, // SkiaSharp
    {"sk_runtimeeffect_get_uniform_byte_size", sk_runtimeeffect_get_uniform_byte_size}, // SkiaSharp
    {"sk_runtimeeffect_get_uniform_from_index", sk_runtimeeffect_get_uniform_from_index}, // SkiaSharp
    {"sk_runtimeeffect_get_uniform_from_name", sk_runtimeeffect_get_uniform_from_name}, // SkiaSharp
    {"sk_runtimeeffect_get_uniform_name", sk_runtimeeffect_get_uniform_name}, // SkiaSharp
    {"sk_runtimeeffect_get_uniforms_size", sk_runtimeeffect_get_uniforms_size}, // SkiaSharp
    {"sk_runtimeeffect_make_blender", sk_runtimeeffect_make_blender}, // SkiaSharp
    {"sk_runtimeeffect_make_color_filter", sk_runtimeeffect_make_color_filter}, // SkiaSharp
    {"sk_runtimeeffect_make_for_blender", sk_runtimeeffect_make_for_blender}, // SkiaSharp
    {"sk_runtimeeffect_make_for_color_filter", sk_runtimeeffect_make_for_color_filter}, // SkiaSharp
    {"sk_runtimeeffect_make_for_shader", sk_runtimeeffect_make_for_shader}, // SkiaSharp
    {"sk_runtimeeffect_make_shader", sk_runtimeeffect_make_shader}, // SkiaSharp
    {"sk_runtimeeffect_unref", sk_runtimeeffect_unref}, // SkiaSharp
    {"sk_shader_new_blend", sk_shader_new_blend}, // SkiaSharp
    {"sk_shader_new_blender", sk_shader_new_blender}, // SkiaSharp
    {"sk_shader_new_color", sk_shader_new_color}, // SkiaSharp
    {"sk_shader_new_color4f", sk_shader_new_color4f}, // SkiaSharp
    {"sk_shader_new_empty", sk_shader_new_empty}, // SkiaSharp
    {"sk_shader_new_linear_gradient", sk_shader_new_linear_gradient}, // SkiaSharp
    {"sk_shader_new_linear_gradient_color4f", sk_shader_new_linear_gradient_color4f}, // SkiaSharp
    {"sk_shader_new_perlin_noise_fractal_noise", sk_shader_new_perlin_noise_fractal_noise}, // SkiaSharp
    {"sk_shader_new_perlin_noise_turbulence", sk_shader_new_perlin_noise_turbulence}, // SkiaSharp
    {"sk_shader_new_radial_gradient", sk_shader_new_radial_gradient}, // SkiaSharp
    {"sk_shader_new_radial_gradient_color4f", sk_shader_new_radial_gradient_color4f}, // SkiaSharp
    {"sk_shader_new_sweep_gradient", sk_shader_new_sweep_gradient}, // SkiaSharp
    {"sk_shader_new_sweep_gradient_color4f", sk_shader_new_sweep_gradient_color4f}, // SkiaSharp
    {"sk_shader_new_two_point_conical_gradient", sk_shader_new_two_point_conical_gradient}, // SkiaSharp
    {"sk_shader_new_two_point_conical_gradient_color4f", sk_shader_new_two_point_conical_gradient_color4f}, // SkiaSharp
    {"sk_shader_ref", sk_shader_ref}, // SkiaSharp
    {"sk_shader_unref", sk_shader_unref}, // SkiaSharp
    {"sk_shader_with_color_filter", sk_shader_with_color_filter}, // SkiaSharp
    {"sk_shader_with_local_matrix", sk_shader_with_local_matrix}, // SkiaSharp
    {"sk_stream_asset_destroy", sk_stream_asset_destroy}, // SkiaSharp
    {"sk_stream_destroy", sk_stream_destroy}, // SkiaSharp
    {"sk_stream_duplicate", sk_stream_duplicate}, // SkiaSharp
    {"sk_stream_fork", sk_stream_fork}, // SkiaSharp
    {"sk_stream_get_length", sk_stream_get_length}, // SkiaSharp
    {"sk_stream_get_memory_base", sk_stream_get_memory_base}, // SkiaSharp
    {"sk_stream_get_position", sk_stream_get_position}, // SkiaSharp
    {"sk_stream_has_length", sk_stream_has_length}, // SkiaSharp
    {"sk_stream_has_position", sk_stream_has_position}, // SkiaSharp
    {"sk_stream_is_at_end", sk_stream_is_at_end}, // SkiaSharp
    {"sk_stream_move", sk_stream_move}, // SkiaSharp
    {"sk_stream_peek", sk_stream_peek}, // SkiaSharp
    {"sk_stream_read", sk_stream_read}, // SkiaSharp
    {"sk_stream_read_bool", sk_stream_read_bool}, // SkiaSharp
    {"sk_stream_read_s16", sk_stream_read_s16}, // SkiaSharp
    {"sk_stream_read_s32", sk_stream_read_s32}, // SkiaSharp
    {"sk_stream_read_s8", sk_stream_read_s8}, // SkiaSharp
    {"sk_stream_read_u16", sk_stream_read_u16}, // SkiaSharp
    {"sk_stream_read_u32", sk_stream_read_u32}, // SkiaSharp
    {"sk_stream_read_u8", sk_stream_read_u8}, // SkiaSharp
    {"sk_stream_rewind", sk_stream_rewind}, // SkiaSharp
    {"sk_stream_seek", sk_stream_seek}, // SkiaSharp
    {"sk_stream_skip", sk_stream_skip}, // SkiaSharp
    {"sk_string_destructor", sk_string_destructor}, // SkiaSharp
    {"sk_string_get_c_str", sk_string_get_c_str}, // SkiaSharp
    {"sk_string_get_size", sk_string_get_size}, // SkiaSharp
    {"sk_string_new_empty", sk_string_new_empty}, // SkiaSharp
    {"sk_string_new_with_copy", sk_string_new_with_copy}, // SkiaSharp
    {"sk_surface_draw", sk_surface_draw}, // SkiaSharp
    {"sk_surface_get_canvas", sk_surface_get_canvas}, // SkiaSharp
    {"sk_surface_get_props", sk_surface_get_props}, // SkiaSharp
    {"sk_surface_get_recording_context", sk_surface_get_recording_context}, // SkiaSharp
    {"sk_surface_new_backend_render_target", sk_surface_new_backend_render_target}, // SkiaSharp
    {"sk_surface_new_backend_texture", sk_surface_new_backend_texture}, // SkiaSharp
    {"sk_surface_new_image_snapshot", sk_surface_new_image_snapshot}, // SkiaSharp
    {"sk_surface_new_image_snapshot_with_crop", sk_surface_new_image_snapshot_with_crop}, // SkiaSharp
    {"sk_surface_new_metal_layer", sk_surface_new_metal_layer}, // SkiaSharp
    {"sk_surface_new_metal_view", sk_surface_new_metal_view}, // SkiaSharp
    {"sk_surface_new_null", sk_surface_new_null}, // SkiaSharp
    {"sk_surface_new_raster", sk_surface_new_raster}, // SkiaSharp
    {"sk_surface_new_raster_direct", sk_surface_new_raster_direct}, // SkiaSharp
    {"sk_surface_new_render_target", sk_surface_new_render_target}, // SkiaSharp
    {"sk_surface_peek_pixels", sk_surface_peek_pixels}, // SkiaSharp
    {"sk_surface_read_pixels", sk_surface_read_pixels}, // SkiaSharp
    {"sk_surface_unref", sk_surface_unref}, // SkiaSharp
    {"sk_surfaceprops_delete", sk_surfaceprops_delete}, // SkiaSharp
    {"sk_surfaceprops_get_flags", sk_surfaceprops_get_flags}, // SkiaSharp
    {"sk_surfaceprops_get_pixel_geometry", sk_surfaceprops_get_pixel_geometry}, // SkiaSharp
    {"sk_surfaceprops_new", sk_surfaceprops_new}, // SkiaSharp
    {"sk_svgcanvas_create_with_stream", sk_svgcanvas_create_with_stream}, // SkiaSharp
    {"sk_swizzle_swap_rb", sk_swizzle_swap_rb}, // SkiaSharp
    {"sk_text_utils_get_path", sk_text_utils_get_path}, // SkiaSharp
    {"sk_text_utils_get_pos_path", sk_text_utils_get_pos_path}, // SkiaSharp
    {"sk_textblob_builder_alloc_run", sk_textblob_builder_alloc_run}, // SkiaSharp
    {"sk_textblob_builder_alloc_run_pos", sk_textblob_builder_alloc_run_pos}, // SkiaSharp
    {"sk_textblob_builder_alloc_run_pos_h", sk_textblob_builder_alloc_run_pos_h}, // SkiaSharp
    {"sk_textblob_builder_alloc_run_rsxform", sk_textblob_builder_alloc_run_rsxform}, // SkiaSharp
    {"sk_textblob_builder_alloc_run_text", sk_textblob_builder_alloc_run_text}, // SkiaSharp
    {"sk_textblob_builder_alloc_run_text_pos", sk_textblob_builder_alloc_run_text_pos}, // SkiaSharp
    {"sk_textblob_builder_alloc_run_text_pos_h", sk_textblob_builder_alloc_run_text_pos_h}, // SkiaSharp
    {"sk_textblob_builder_alloc_run_text_rsxform", sk_textblob_builder_alloc_run_text_rsxform}, // SkiaSharp
    {"sk_textblob_builder_delete", sk_textblob_builder_delete}, // SkiaSharp
    {"sk_textblob_builder_make", sk_textblob_builder_make}, // SkiaSharp
    {"sk_textblob_builder_new", sk_textblob_builder_new}, // SkiaSharp
    {"sk_textblob_get_bounds", sk_textblob_get_bounds}, // SkiaSharp
    {"sk_textblob_get_intercepts", sk_textblob_get_intercepts}, // SkiaSharp
    {"sk_textblob_get_unique_id", sk_textblob_get_unique_id}, // SkiaSharp
    {"sk_textblob_ref", sk_textblob_ref}, // SkiaSharp
    {"sk_textblob_unref", sk_textblob_unref}, // SkiaSharp
    {"sk_typeface_copy_table_data", sk_typeface_copy_table_data}, // SkiaSharp
    {"sk_typeface_count_glyphs", sk_typeface_count_glyphs}, // SkiaSharp
    {"sk_typeface_count_tables", sk_typeface_count_tables}, // SkiaSharp
    {"sk_typeface_create_default", sk_typeface_create_default}, // SkiaSharp
    {"sk_typeface_create_from_data", sk_typeface_create_from_data}, // SkiaSharp
    {"sk_typeface_create_from_file", sk_typeface_create_from_file}, // SkiaSharp
    {"sk_typeface_create_from_name", sk_typeface_create_from_name}, // SkiaSharp
    {"sk_typeface_create_from_stream", sk_typeface_create_from_stream}, // SkiaSharp
    {"sk_typeface_get_family_name", sk_typeface_get_family_name}, // SkiaSharp
    {"sk_typeface_get_font_slant", sk_typeface_get_font_slant}, // SkiaSharp
    {"sk_typeface_get_font_weight", sk_typeface_get_font_weight}, // SkiaSharp
    {"sk_typeface_get_font_width", sk_typeface_get_font_width}, // SkiaSharp
    {"sk_typeface_get_fontstyle", sk_typeface_get_fontstyle}, // SkiaSharp
    {"sk_typeface_get_kerning_pair_adjustments", sk_typeface_get_kerning_pair_adjustments}, // SkiaSharp
    {"sk_typeface_get_post_script_name", sk_typeface_get_post_script_name}, // SkiaSharp
    {"sk_typeface_get_table_data", sk_typeface_get_table_data}, // SkiaSharp
    {"sk_typeface_get_table_size", sk_typeface_get_table_size}, // SkiaSharp
    {"sk_typeface_get_table_tags", sk_typeface_get_table_tags}, // SkiaSharp
    {"sk_typeface_get_units_per_em", sk_typeface_get_units_per_em}, // SkiaSharp
    {"sk_typeface_is_fixed_pitch", sk_typeface_is_fixed_pitch}, // SkiaSharp
    {"sk_typeface_open_stream", sk_typeface_open_stream}, // SkiaSharp
    {"sk_typeface_ref_default", sk_typeface_ref_default}, // SkiaSharp
    {"sk_typeface_unichar_to_glyph", sk_typeface_unichar_to_glyph}, // SkiaSharp
    {"sk_typeface_unichars_to_glyphs", sk_typeface_unichars_to_glyphs}, // SkiaSharp
    {"sk_typeface_unref", sk_typeface_unref}, // SkiaSharp
    {"sk_version_get_increment", sk_version_get_increment}, // SkiaSharp
    {"sk_version_get_milestone", sk_version_get_milestone}, // SkiaSharp
    {"sk_version_get_string", sk_version_get_string}, // SkiaSharp
    {"sk_vertices_make_copy", sk_vertices_make_copy}, // SkiaSharp
    {"sk_vertices_ref", sk_vertices_ref}, // SkiaSharp
    {"sk_vertices_unref", sk_vertices_unref}, // SkiaSharp
    {"sk_webpencoder_encode", sk_webpencoder_encode}, // SkiaSharp
    {"sk_wstream_bytes_written", sk_wstream_bytes_written}, // SkiaSharp
    {"sk_wstream_flush", sk_wstream_flush}, // SkiaSharp
    {"sk_wstream_get_size_of_packed_uint", sk_wstream_get_size_of_packed_uint}, // SkiaSharp
    {"sk_wstream_newline", sk_wstream_newline}, // SkiaSharp
    {"sk_wstream_write", sk_wstream_write}, // SkiaSharp
    {"sk_wstream_write_16", sk_wstream_write_16}, // SkiaSharp
    {"sk_wstream_write_32", sk_wstream_write_32}, // SkiaSharp
    {"sk_wstream_write_8", sk_wstream_write_8}, // SkiaSharp
    {"sk_wstream_write_bigdec_as_text", sk_wstream_write_bigdec_as_text}, // SkiaSharp
    {"sk_wstream_write_bool", sk_wstream_write_bool}, // SkiaSharp
    {"sk_wstream_write_dec_as_text", sk_wstream_write_dec_as_text}, // SkiaSharp
    {"sk_wstream_write_hex_as_text", sk_wstream_write_hex_as_text}, // SkiaSharp
    {"sk_wstream_write_packed_uint", sk_wstream_write_packed_uint}, // SkiaSharp
    {"sk_wstream_write_scalar", sk_wstream_write_scalar}, // SkiaSharp
    {"sk_wstream_write_scalar_as_text", sk_wstream_write_scalar_as_text}, // SkiaSharp
    {"sk_wstream_write_stream", sk_wstream_write_stream}, // SkiaSharp
    {"sk_wstream_write_text", sk_wstream_write_text}, // SkiaSharp
    {NULL, NULL}
};

static PinvokeImport libSystem_Globalization_Native_imports [] = {
    {"GlobalizationNative_ChangeCase", GlobalizationNative_ChangeCase}, // System.Private.CoreLib
    {"GlobalizationNative_ChangeCaseInvariant", GlobalizationNative_ChangeCaseInvariant}, // System.Private.CoreLib
    {"GlobalizationNative_ChangeCaseTurkish", GlobalizationNative_ChangeCaseTurkish}, // System.Private.CoreLib
    {"GlobalizationNative_CloseSortHandle", GlobalizationNative_CloseSortHandle}, // System.Private.CoreLib
    {"GlobalizationNative_CompareString", GlobalizationNative_CompareString}, // System.Private.CoreLib
    {"GlobalizationNative_EndsWith", GlobalizationNative_EndsWith}, // System.Private.CoreLib
    {"GlobalizationNative_EnumCalendarInfo", GlobalizationNative_EnumCalendarInfo}, // System.Private.CoreLib
    {"GlobalizationNative_GetCalendarInfo", GlobalizationNative_GetCalendarInfo}, // System.Private.CoreLib
    {"GlobalizationNative_GetCalendars", GlobalizationNative_GetCalendars}, // System.Private.CoreLib
    {"GlobalizationNative_GetDefaultLocaleName", GlobalizationNative_GetDefaultLocaleName}, // System.Private.CoreLib
    {"GlobalizationNative_GetICUVersion", GlobalizationNative_GetICUVersion}, // System.Private.CoreLib
    {"GlobalizationNative_GetJapaneseEraStartDate", GlobalizationNative_GetJapaneseEraStartDate}, // System.Private.CoreLib
    {"GlobalizationNative_GetLatestJapaneseEra", GlobalizationNative_GetLatestJapaneseEra}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleInfoGroupingSizes", GlobalizationNative_GetLocaleInfoGroupingSizes}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleInfoInt", GlobalizationNative_GetLocaleInfoInt}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleInfoString", GlobalizationNative_GetLocaleInfoString}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleName", GlobalizationNative_GetLocaleName}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleTimeFormat", GlobalizationNative_GetLocaleTimeFormat}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocales", GlobalizationNative_GetLocales}, // System.Private.CoreLib
    {"GlobalizationNative_GetSortHandle", GlobalizationNative_GetSortHandle}, // System.Private.CoreLib
    {"GlobalizationNative_GetSortKey", GlobalizationNative_GetSortKey}, // System.Private.CoreLib
    {"GlobalizationNative_GetSortVersion", GlobalizationNative_GetSortVersion}, // System.Private.CoreLib
    {"GlobalizationNative_IndexOf", GlobalizationNative_IndexOf}, // System.Private.CoreLib
    {"GlobalizationNative_InitICUFunctions", GlobalizationNative_InitICUFunctions}, // System.Private.CoreLib
    {"GlobalizationNative_InitOrdinalCasingPage", GlobalizationNative_InitOrdinalCasingPage}, // System.Private.CoreLib
    {"GlobalizationNative_IsNormalized", GlobalizationNative_IsNormalized}, // System.Private.CoreLib
    {"GlobalizationNative_IsPredefinedLocale", GlobalizationNative_IsPredefinedLocale}, // System.Private.CoreLib
    {"GlobalizationNative_LastIndexOf", GlobalizationNative_LastIndexOf}, // System.Private.CoreLib
    {"GlobalizationNative_LoadICU", GlobalizationNative_LoadICU}, // System.Private.CoreLib
    {"GlobalizationNative_NormalizeString", GlobalizationNative_NormalizeString}, // System.Private.CoreLib
    {"GlobalizationNative_StartsWith", GlobalizationNative_StartsWith}, // System.Private.CoreLib
    {"GlobalizationNative_ToAscii", GlobalizationNative_ToAscii}, // System.Private.CoreLib
    {"GlobalizationNative_ToUnicode", GlobalizationNative_ToUnicode}, // System.Private.CoreLib
    {NULL, NULL}
};

static PinvokeImport libSystem_IO_Compression_Native_imports [] = {
    {"CompressionNative_Crc32", CompressionNative_Crc32}, // System.IO.Compression
    {"CompressionNative_Deflate", CompressionNative_Deflate}, // System.IO.Compression, System.Net.WebSockets
    {"CompressionNative_DeflateEnd", CompressionNative_DeflateEnd}, // System.IO.Compression, System.Net.WebSockets
    {"CompressionNative_DeflateInit2_", CompressionNative_DeflateInit2_}, // System.IO.Compression, System.Net.WebSockets
    {"CompressionNative_Inflate", CompressionNative_Inflate}, // System.IO.Compression, System.Net.WebSockets
    {"CompressionNative_InflateEnd", CompressionNative_InflateEnd}, // System.IO.Compression, System.Net.WebSockets
    {"CompressionNative_InflateInit2_", CompressionNative_InflateInit2_}, // System.IO.Compression, System.Net.WebSockets
    {"CompressionNative_InflateReset2_", CompressionNative_InflateReset2_}, // System.IO.Compression
    {NULL, NULL}
};

static PinvokeImport libSystem_Native_imports [] = {
    {"SystemNative_Access", SystemNative_Access}, // System.Private.CoreLib
    {"SystemNative_AlignedAlloc", SystemNative_AlignedAlloc}, // System.Private.CoreLib
    {"SystemNative_AlignedFree", SystemNative_AlignedFree}, // System.Private.CoreLib
    {"SystemNative_AlignedRealloc", SystemNative_AlignedRealloc}, // System.Private.CoreLib
    {"SystemNative_Calloc", SystemNative_Calloc}, // System.Private.CoreLib
    {"SystemNative_CanGetHiddenFlag", SystemNative_CanGetHiddenFlag}, // System.Private.CoreLib
    {"SystemNative_ChDir", SystemNative_ChDir}, // System.Private.CoreLib
    {"SystemNative_ChMod", SystemNative_ChMod}, // System.Private.CoreLib
    {"SystemNative_Close", SystemNative_Close}, // System.Private.CoreLib
    {"SystemNative_CloseDir", SystemNative_CloseDir}, // System.Private.CoreLib
    {"SystemNative_ConvertErrorPalToPlatform", SystemNative_ConvertErrorPalToPlatform}, // System.Console, System.IO.Compression.ZipFile, System.IO.MemoryMappedFiles, System.Net.Primitives, System.Private.CoreLib
    {"SystemNative_ConvertErrorPlatformToPal", SystemNative_ConvertErrorPlatformToPal}, // System.Console, System.IO.Compression.ZipFile, System.IO.MemoryMappedFiles, System.Net.Primitives, System.Private.CoreLib
    {"SystemNative_CopyFile", SystemNative_CopyFile}, // System.Private.CoreLib
    {"SystemNative_Dup", SystemNative_Dup}, // System.Console
    {"SystemNative_FAllocate", SystemNative_FAllocate}, // System.Private.CoreLib
    {"SystemNative_FChMod", SystemNative_FChMod}, // System.Private.CoreLib
    {"SystemNative_FChflags", SystemNative_FChflags}, // System.Private.CoreLib
    {"SystemNative_FLock", SystemNative_FLock}, // System.Private.CoreLib
    {"SystemNative_FStat", SystemNative_FStat}, // System.IO.Compression.ZipFile, System.IO.MemoryMappedFiles, System.Private.CoreLib
    {"SystemNative_FSync", SystemNative_FSync}, // System.Private.CoreLib
    {"SystemNative_FTruncate", SystemNative_FTruncate}, // System.IO.MemoryMappedFiles, System.Private.CoreLib
    {"SystemNative_FUTimens", SystemNative_FUTimens}, // System.Private.CoreLib
    {"SystemNative_FcntlSetFD", SystemNative_FcntlSetFD}, // System.IO.MemoryMappedFiles
    {"SystemNative_Free", SystemNative_Free}, // System.Private.CoreLib
    {"SystemNative_FreeEnviron", SystemNative_FreeEnviron}, // System.Private.CoreLib
    {"SystemNative_GetAddressFamily", SystemNative_GetAddressFamily}, // System.Net.Primitives
    {"SystemNative_GetCpuUtilization", SystemNative_GetCpuUtilization}, // System.Private.CoreLib
    {"SystemNative_GetCryptographicallySecureRandomBytes", SystemNative_GetCryptographicallySecureRandomBytes}, // System.Private.CoreLib, System.Security.Cryptography
    {"SystemNative_GetCwd", SystemNative_GetCwd}, // System.Private.CoreLib
    {"SystemNative_GetDefaultSearchOrderPseudoHandle", SystemNative_GetDefaultSearchOrderPseudoHandle}, // System.Private.CoreLib
    {"SystemNative_GetEnv", SystemNative_GetEnv}, // System.Private.CoreLib
    {"SystemNative_GetEnviron", SystemNative_GetEnviron}, // System.Private.CoreLib
    {"SystemNative_GetErrNo", SystemNative_GetErrNo}, // System.Private.CoreLib
    {"SystemNative_GetFileSystemType", SystemNative_GetFileSystemType}, // System.Private.CoreLib
    {"SystemNative_GetIPv4Address", SystemNative_GetIPv4Address}, // System.Net.Primitives
    {"SystemNative_GetIPv6Address", SystemNative_GetIPv6Address}, // System.Net.Primitives
    {"SystemNative_GetLowResolutionTimestamp", SystemNative_GetLowResolutionTimestamp}, // System.Private.CoreLib
    {"SystemNative_GetNonCryptographicallySecureRandomBytes", SystemNative_GetNonCryptographicallySecureRandomBytes}, // System.Private.CoreLib
    {"SystemNative_GetPort", SystemNative_GetPort}, // System.Net.Primitives
    {"SystemNative_GetSocketAddressSizes", SystemNative_GetSocketAddressSizes}, // System.Net.Primitives
    {"SystemNative_GetSystemTimeAsTicks", SystemNative_GetSystemTimeAsTicks}, // System.Private.CoreLib
    {"SystemNative_GetTimeZoneData", SystemNative_GetTimeZoneData}, // System.Private.CoreLib
    {"SystemNative_GetTimestamp", SystemNative_GetTimestamp}, // System.Private.CoreLib
    {"SystemNative_IsMemfdSupported", SystemNative_IsMemfdSupported}, // System.IO.MemoryMappedFiles
    {"SystemNative_LChflags", SystemNative_LChflags}, // System.Private.CoreLib
    {"SystemNative_LChflagsCanSetHiddenFlag", SystemNative_LChflagsCanSetHiddenFlag}, // System.Private.CoreLib
    {"SystemNative_LSeek", SystemNative_LSeek}, // System.Private.CoreLib
    {"SystemNative_LStat", SystemNative_LStat}, // System.Private.CoreLib
    {"SystemNative_Link", SystemNative_Link}, // System.Private.CoreLib
    {"SystemNative_LockFileRegion", SystemNative_LockFileRegion}, // System.Private.CoreLib
    {"SystemNative_Log", SystemNative_Log}, // System.Private.CoreLib
    {"SystemNative_LogError", SystemNative_LogError}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Acquire", SystemNative_LowLevelMonitor_Acquire}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Create", SystemNative_LowLevelMonitor_Create}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Destroy", SystemNative_LowLevelMonitor_Destroy}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Release", SystemNative_LowLevelMonitor_Release}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Signal_Release", SystemNative_LowLevelMonitor_Signal_Release}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_TimedWait", SystemNative_LowLevelMonitor_TimedWait}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Wait", SystemNative_LowLevelMonitor_Wait}, // System.Private.CoreLib
    {"SystemNative_MAdvise", SystemNative_MAdvise}, // System.IO.MemoryMappedFiles
    {"SystemNative_MMap", SystemNative_MMap}, // System.IO.MemoryMappedFiles
    {"SystemNative_MSync", SystemNative_MSync}, // System.IO.MemoryMappedFiles
    {"SystemNative_MUnmap", SystemNative_MUnmap}, // System.IO.MemoryMappedFiles
    {"SystemNative_Malloc", SystemNative_Malloc}, // System.Private.CoreLib
    {"SystemNative_MemfdCreate", SystemNative_MemfdCreate}, // System.IO.MemoryMappedFiles
    {"SystemNative_MkDir", SystemNative_MkDir}, // System.Private.CoreLib
    {"SystemNative_MkdTemp", SystemNative_MkdTemp}, // System.Private.CoreLib
    {"SystemNative_MksTemps", SystemNative_MksTemps}, // System.Private.CoreLib
    {"SystemNative_Open", SystemNative_Open}, // System.Private.CoreLib
    {"SystemNative_OpenDir", SystemNative_OpenDir}, // System.Private.CoreLib
    {"SystemNative_PRead", SystemNative_PRead}, // System.Private.CoreLib
    {"SystemNative_PReadV", SystemNative_PReadV}, // System.Private.CoreLib
    {"SystemNative_PWrite", SystemNative_PWrite}, // System.Private.CoreLib
    {"SystemNative_PWriteV", SystemNative_PWriteV}, // System.Private.CoreLib
    {"SystemNative_PosixFAdvise", SystemNative_PosixFAdvise}, // System.Private.CoreLib
    {"SystemNative_Read", SystemNative_Read}, // System.Private.CoreLib
    {"SystemNative_ReadDir", SystemNative_ReadDir}, // System.Private.CoreLib
    {"SystemNative_ReadLink", SystemNative_ReadLink}, // System.Private.CoreLib
    {"SystemNative_Realloc", SystemNative_Realloc}, // System.Private.CoreLib
    {"SystemNative_Rename", SystemNative_Rename}, // System.Private.CoreLib
    {"SystemNative_RmDir", SystemNative_RmDir}, // System.Private.CoreLib
    {"SystemNative_SchedGetCpu", SystemNative_SchedGetCpu}, // System.Private.CoreLib
    {"SystemNative_SetAddressFamily", SystemNative_SetAddressFamily}, // System.Net.Primitives
    {"SystemNative_SetErrNo", SystemNative_SetErrNo}, // System.Private.CoreLib
    {"SystemNative_SetIPv4Address", SystemNative_SetIPv4Address}, // System.Net.Primitives
    {"SystemNative_SetIPv6Address", SystemNative_SetIPv6Address}, // System.Net.Primitives
    {"SystemNative_SetPort", SystemNative_SetPort}, // System.Net.Primitives
    {"SystemNative_ShmOpen", SystemNative_ShmOpen}, // System.IO.MemoryMappedFiles
    {"SystemNative_ShmUnlink", SystemNative_ShmUnlink}, // System.IO.MemoryMappedFiles
    {"SystemNative_Stat", SystemNative_Stat}, // System.IO.Compression.ZipFile, System.Private.CoreLib
    {"SystemNative_StrErrorR", SystemNative_StrErrorR}, // System.Console, System.IO.Compression.ZipFile, System.IO.MemoryMappedFiles, System.Net.Primitives, System.Private.CoreLib
    {"SystemNative_SymLink", SystemNative_SymLink}, // System.Private.CoreLib
    {"SystemNative_SysConf", SystemNative_SysConf}, // System.IO.MemoryMappedFiles, System.Private.CoreLib
    {"SystemNative_SysLog", SystemNative_SysLog}, // System.Private.CoreLib
    {"SystemNative_TryGetUInt32OSThreadId", SystemNative_TryGetUInt32OSThreadId}, // System.Private.CoreLib
    {"SystemNative_UTimensat", SystemNative_UTimensat}, // System.Private.CoreLib
    {"SystemNative_Unlink", SystemNative_Unlink}, // System.IO.MemoryMappedFiles, System.Private.CoreLib
    {"SystemNative_Write", SystemNative_Write}, // System.Console, System.Private.CoreLib
    {NULL, NULL}
};

static PinvokeTable pinvoke_tables[] = {
    {"libSkiaSharp", libSkiaSharp_imports, 879},
    {"libSystem.Globalization.Native", libSystem_Globalization_Native_imports, 33},
    {"libSystem.IO.Compression.Native", libSystem_IO_Compression_Native_imports, 8},
    {"libSystem.Native", libSystem_Native_imports, 98}
};

InterpFtnDesc wasm_native_to_interp_ftndescs[41] = {};

void
wasm_native_to_interp_System_Private_CoreLib_System_Threading_ThreadPool_BackgroundJobHandler () {
    typedef void (*InterpEntry_T0) (int*);

    if (!(InterpEntry_T0)wasm_native_to_interp_ftndescs [0].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "System.Threading", "ThreadPool", "BackgroundJobHandler", 100680304, 0);
    }

    ((InterpEntry_T0)wasm_native_to_interp_ftndescs [0].func) ((int*)wasm_native_to_interp_ftndescs [0].arg);
}

void
wasm_native_to_interp_System_Private_CoreLib_System_Diagnostics_Tracing_EventPipeEventProvider_Callback (void * arg0, int32_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4, void * arg5, void * arg6) {
    typedef void (*InterpEntry_T1) (int*, int*, int*, int*, int*, int*, int*, int*);

    if (!(InterpEntry_T1)wasm_native_to_interp_ftndescs [1].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "System.Diagnostics.Tracing", "EventPipeEventProvider", "Callback", 100700532, 7);
    }

    ((InterpEntry_T1)wasm_native_to_interp_ftndescs [1].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)&arg6, (int*)wasm_native_to_interp_ftndescs [1].arg);
}

void
wasm_native_to_interp_System_Private_CoreLib_System_Globalization_CalendarData_EnumCalendarInfoCallback (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T2) (int*, int*, int*);

    if (!(InterpEntry_T2)wasm_native_to_interp_ftndescs [2].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "System.Globalization", "CalendarData", "EnumCalendarInfoCallback", 100676774, 2);
    }

    ((InterpEntry_T2)wasm_native_to_interp_ftndescs [2].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [2].arg);
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_GRGlGetProcProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T3) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T3)wasm_native_to_interp_ftndescs [3].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "GRGlGetProcProxyImplementation", 100663504, 2);
    }

    ((InterpEntry_T3)wasm_native_to_interp_ftndescs [3].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [3].arg);
    return result;
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_GRVkGetProcProxyImplementation (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T4) (int*, int*, int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T4)wasm_native_to_interp_ftndescs [4].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "GRVkGetProcProxyImplementation", 100663505, 4);
    }

    ((InterpEntry_T4)wasm_native_to_interp_ftndescs [4].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [4].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_GetFunctionPointer (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T5) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T5)wasm_native_to_interp_ftndescs [5].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "Internal.Runtime.InteropServices", "ComponentActivator", "GetFunctionPointer", 100663586, 6);
    }

    ((InterpEntry_T5)wasm_native_to_interp_ftndescs [5].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [5].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_LoadAssembly (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T6) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T6)wasm_native_to_interp_ftndescs [6].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "Internal.Runtime.InteropServices", "ComponentActivator", "LoadAssembly", 100663583, 3);
    }

    ((InterpEntry_T6)wasm_native_to_interp_ftndescs [6].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [6].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_LoadAssemblyAndGetFunctionPointer (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T7) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T7)wasm_native_to_interp_ftndescs [7].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "Internal.Runtime.InteropServices", "ComponentActivator", "LoadAssemblyAndGetFunctionPointer", 100663582, 6);
    }

    ((InterpEntry_T7)wasm_native_to_interp_ftndescs [7].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [7].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_LoadAssemblyBytes (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T8) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T8)wasm_native_to_interp_ftndescs [8].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "Internal.Runtime.InteropServices", "ComponentActivator", "LoadAssemblyBytes", 100663585, 6);
    }

    ((InterpEntry_T8)wasm_native_to_interp_ftndescs [8].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [8].arg);
    return result;
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKBitmapReleaseProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T9) (int*, int*, int*);

    if (!(InterpEntry_T9)wasm_native_to_interp_ftndescs [9].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKBitmapReleaseProxyImplementation", 100663506, 2);
    }

    ((InterpEntry_T9)wasm_native_to_interp_ftndescs [9].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [9].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKDataReleaseProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T10) (int*, int*, int*);

    if (!(InterpEntry_T10)wasm_native_to_interp_ftndescs [10].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKDataReleaseProxyImplementation", 100663507, 2);
    }

    ((InterpEntry_T10)wasm_native_to_interp_ftndescs [10].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [10].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKGlyphPathProxyImplementation (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T11) (int*, int*, int*, int*);

    if (!(InterpEntry_T11)wasm_native_to_interp_ftndescs [11].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKGlyphPathProxyImplementation", 100663508, 3);
    }

    ((InterpEntry_T11)wasm_native_to_interp_ftndescs [11].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [11].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKImageRasterReleaseProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T12) (int*, int*, int*);

    if (!(InterpEntry_T12)wasm_native_to_interp_ftndescs [12].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKImageRasterReleaseProxyImplementation", 100663509, 2);
    }

    ((InterpEntry_T12)wasm_native_to_interp_ftndescs [12].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [12].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKImageRasterReleaseProxyImplementationForCoTaskMem (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T13) (int*, int*, int*);

    if (!(InterpEntry_T13)wasm_native_to_interp_ftndescs [13].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKImageRasterReleaseProxyImplementationForCoTaskMem", 100663510, 2);
    }

    ((InterpEntry_T13)wasm_native_to_interp_ftndescs [13].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [13].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKImageTextureReleaseProxyImplementation (void * arg0) {
    typedef void (*InterpEntry_T14) (int*, int*);

    if (!(InterpEntry_T14)wasm_native_to_interp_ftndescs [14].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKImageTextureReleaseProxyImplementation", 100663511, 1);
    }

    ((InterpEntry_T14)wasm_native_to_interp_ftndescs [14].func) ((int*)&arg0, (int*)wasm_native_to_interp_ftndescs [14].arg);
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableApproximateBytesUsedProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T15) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T15)wasm_native_to_interp_ftndescs [15].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedDrawableApproximateBytesUsedProxyImplementation", 100663512, 2);
    }

    ((InterpEntry_T15)wasm_native_to_interp_ftndescs [15].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [15].arg);
    return result;
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableDestroyProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T16) (int*, int*, int*);

    if (!(InterpEntry_T16)wasm_native_to_interp_ftndescs [16].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedDrawableDestroyProxyImplementation", 100663513, 2);
    }

    ((InterpEntry_T16)wasm_native_to_interp_ftndescs [16].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [16].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableDrawProxyImplementation (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T17) (int*, int*, int*, int*);

    if (!(InterpEntry_T17)wasm_native_to_interp_ftndescs [17].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedDrawableDrawProxyImplementation", 100663514, 3);
    }

    ((InterpEntry_T17)wasm_native_to_interp_ftndescs [17].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [17].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableGetBoundsProxyImplementation (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T18) (int*, int*, int*, int*);

    if (!(InterpEntry_T18)wasm_native_to_interp_ftndescs [18].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedDrawableGetBoundsProxyImplementation", 100663515, 3);
    }

    ((InterpEntry_T18)wasm_native_to_interp_ftndescs [18].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [18].arg);
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableMakePictureSnapshotProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T19) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T19)wasm_native_to_interp_ftndescs [19].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedDrawableMakePictureSnapshotProxyImplementation", 100663516, 2);
    }

    ((InterpEntry_T19)wasm_native_to_interp_ftndescs [19].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [19].arg);
    return result;
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamDestroyProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T20) (int*, int*, int*);

    if (!(InterpEntry_T20)wasm_native_to_interp_ftndescs [20].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamDestroyProxyImplementation", 100663517, 2);
    }

    ((InterpEntry_T20)wasm_native_to_interp_ftndescs [20].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [20].arg);
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamDuplicateProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T21) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T21)wasm_native_to_interp_ftndescs [21].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamDuplicateProxyImplementation", 100663518, 2);
    }

    ((InterpEntry_T21)wasm_native_to_interp_ftndescs [21].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [21].arg);
    return result;
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamForkProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T22) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T22)wasm_native_to_interp_ftndescs [22].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamForkProxyImplementation", 100663519, 2);
    }

    ((InterpEntry_T22)wasm_native_to_interp_ftndescs [22].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [22].arg);
    return result;
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamGetLengthProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T23) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T23)wasm_native_to_interp_ftndescs [23].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamGetLengthProxyImplementation", 100663520, 2);
    }

    ((InterpEntry_T23)wasm_native_to_interp_ftndescs [23].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [23].arg);
    return result;
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamGetPositionProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T24) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T24)wasm_native_to_interp_ftndescs [24].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamGetPositionProxyImplementation", 100663521, 2);
    }

    ((InterpEntry_T24)wasm_native_to_interp_ftndescs [24].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [24].arg);
    return result;
}

int32_t
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamHasLengthProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T25) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T25)wasm_native_to_interp_ftndescs [25].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamHasLengthProxyImplementation", 100663522, 2);
    }

    ((InterpEntry_T25)wasm_native_to_interp_ftndescs [25].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [25].arg);
    return result;
}

int32_t
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamHasPositionProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T26) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T26)wasm_native_to_interp_ftndescs [26].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamHasPositionProxyImplementation", 100663523, 2);
    }

    ((InterpEntry_T26)wasm_native_to_interp_ftndescs [26].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [26].arg);
    return result;
}

int32_t
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamIsAtEndProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T27) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T27)wasm_native_to_interp_ftndescs [27].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamIsAtEndProxyImplementation", 100663524, 2);
    }

    ((InterpEntry_T27)wasm_native_to_interp_ftndescs [27].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [27].arg);
    return result;
}

int32_t
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamMoveProxyImplementation (void * arg0, void * arg1, int32_t arg2) {
    typedef void (*InterpEntry_T28) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T28)wasm_native_to_interp_ftndescs [28].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamMoveProxyImplementation", 100663525, 3);
    }

    ((InterpEntry_T28)wasm_native_to_interp_ftndescs [28].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [28].arg);
    return result;
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamPeekProxyImplementation (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T29) (int*, int*, int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T29)wasm_native_to_interp_ftndescs [29].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamPeekProxyImplementation", 100663526, 4);
    }

    ((InterpEntry_T29)wasm_native_to_interp_ftndescs [29].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [29].arg);
    return result;
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamReadProxyImplementation (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T30) (int*, int*, int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T30)wasm_native_to_interp_ftndescs [30].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamReadProxyImplementation", 100663527, 4);
    }

    ((InterpEntry_T30)wasm_native_to_interp_ftndescs [30].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [30].arg);
    return result;
}

int32_t
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamRewindProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T31) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T31)wasm_native_to_interp_ftndescs [31].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamRewindProxyImplementation", 100663528, 2);
    }

    ((InterpEntry_T31)wasm_native_to_interp_ftndescs [31].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [31].arg);
    return result;
}

int32_t
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamSeekProxyImplementation (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T32) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T32)wasm_native_to_interp_ftndescs [32].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamSeekProxyImplementation", 100663529, 3);
    }

    ((InterpEntry_T32)wasm_native_to_interp_ftndescs [32].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [32].arg);
    return result;
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedTraceMemoryDumpDumpNumericValueProxyImplementation (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, uint64_t arg5) {
    typedef void (*InterpEntry_T33) (int*, int*, int*, int*, int*, int*, int*);

    if (!(InterpEntry_T33)wasm_native_to_interp_ftndescs [33].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedTraceMemoryDumpDumpNumericValueProxyImplementation", 100663530, 6);
    }

    ((InterpEntry_T33)wasm_native_to_interp_ftndescs [33].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [33].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedTraceMemoryDumpDumpStringValueProxyImplementation (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T34) (int*, int*, int*, int*, int*, int*);

    if (!(InterpEntry_T34)wasm_native_to_interp_ftndescs [34].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedTraceMemoryDumpDumpStringValueProxyImplementation", 100663531, 5);
    }

    ((InterpEntry_T34)wasm_native_to_interp_ftndescs [34].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [34].arg);
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedWStreamBytesWrittenProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T35) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T35)wasm_native_to_interp_ftndescs [35].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedWStreamBytesWrittenProxyImplementation", 100663532, 2);
    }

    ((InterpEntry_T35)wasm_native_to_interp_ftndescs [35].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [35].arg);
    return result;
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedWStreamDestroyProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T36) (int*, int*, int*);

    if (!(InterpEntry_T36)wasm_native_to_interp_ftndescs [36].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedWStreamDestroyProxyImplementation", 100663533, 2);
    }

    ((InterpEntry_T36)wasm_native_to_interp_ftndescs [36].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [36].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedWStreamFlushProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T37) (int*, int*, int*);

    if (!(InterpEntry_T37)wasm_native_to_interp_ftndescs [37].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedWStreamFlushProxyImplementation", 100663534, 2);
    }

    ((InterpEntry_T37)wasm_native_to_interp_ftndescs [37].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [37].arg);
}

int32_t
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedWStreamWriteProxyImplementation (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T38) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T38)wasm_native_to_interp_ftndescs [38].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedWStreamWriteProxyImplementation", 100663535, 4);
    }

    ((InterpEntry_T38)wasm_native_to_interp_ftndescs [38].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [38].arg);
    return result;
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKSurfaceRasterReleaseProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T39) (int*, int*, int*);

    if (!(InterpEntry_T39)wasm_native_to_interp_ftndescs [39].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKSurfaceRasterReleaseProxyImplementation", 100663536, 2);
    }

    ((InterpEntry_T39)wasm_native_to_interp_ftndescs [39].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [39].arg);
}

void
wasm_native_to_interp_System_Private_CoreLib_System_Threading_TimerQueue_TimerHandler () {
    typedef void (*InterpEntry_T40) (int*);

    if (!(InterpEntry_T40)wasm_native_to_interp_ftndescs [40].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "System.Threading", "TimerQueue", "TimerHandler", 100680379, 0);
    }

    ((InterpEntry_T40)wasm_native_to_interp_ftndescs [40].func) ((int*)wasm_native_to_interp_ftndescs [40].arg);
}

static UnmanagedExport wasm_native_to_interp_table[] = {
    {"BackgroundJobHandler#0:System.Private.CoreLib:System.Threading:ThreadPool", 100680304, wasm_native_to_interp_System_Private_CoreLib_System_Threading_ThreadPool_BackgroundJobHandler},
    {"Callback#7:System.Private.CoreLib:System.Diagnostics.Tracing:EventPipeEventProvider", 100700532, wasm_native_to_interp_System_Private_CoreLib_System_Diagnostics_Tracing_EventPipeEventProvider_Callback},
    {"EnumCalendarInfoCallback#2:System.Private.CoreLib:System.Globalization:CalendarData", 100676774, wasm_native_to_interp_System_Private_CoreLib_System_Globalization_CalendarData_EnumCalendarInfoCallback},
    {"GRGlGetProcProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663504, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_GRGlGetProcProxyImplementation},
    {"GRVkGetProcProxyImplementation#4:SkiaSharp:SkiaSharp:DelegateProxies", 100663505, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_GRVkGetProcProxyImplementation},
    {"GetFunctionPointer#6:System.Private.CoreLib:Internal.Runtime.InteropServices:ComponentActivator", 100663586, wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_GetFunctionPointer},
    {"LoadAssembly#3:System.Private.CoreLib:Internal.Runtime.InteropServices:ComponentActivator", 100663583, wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_LoadAssembly},
    {"LoadAssemblyAndGetFunctionPointer#6:System.Private.CoreLib:Internal.Runtime.InteropServices:ComponentActivator", 100663582, wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_LoadAssemblyAndGetFunctionPointer},
    {"LoadAssemblyBytes#6:System.Private.CoreLib:Internal.Runtime.InteropServices:ComponentActivator", 100663585, wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_LoadAssemblyBytes},
    {"SKBitmapReleaseProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663506, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKBitmapReleaseProxyImplementation},
    {"SKDataReleaseProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663507, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKDataReleaseProxyImplementation},
    {"SKGlyphPathProxyImplementation#3:SkiaSharp:SkiaSharp:DelegateProxies", 100663508, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKGlyphPathProxyImplementation},
    {"SKImageRasterReleaseProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663509, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKImageRasterReleaseProxyImplementation},
    {"SKImageRasterReleaseProxyImplementationForCoTaskMem#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663510, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKImageRasterReleaseProxyImplementationForCoTaskMem},
    {"SKImageTextureReleaseProxyImplementation#1:SkiaSharp:SkiaSharp:DelegateProxies", 100663511, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKImageTextureReleaseProxyImplementation},
    {"SKManagedDrawableApproximateBytesUsedProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663512, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableApproximateBytesUsedProxyImplementation},
    {"SKManagedDrawableDestroyProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663513, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableDestroyProxyImplementation},
    {"SKManagedDrawableDrawProxyImplementation#3:SkiaSharp:SkiaSharp:DelegateProxies", 100663514, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableDrawProxyImplementation},
    {"SKManagedDrawableGetBoundsProxyImplementation#3:SkiaSharp:SkiaSharp:DelegateProxies", 100663515, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableGetBoundsProxyImplementation},
    {"SKManagedDrawableMakePictureSnapshotProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663516, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableMakePictureSnapshotProxyImplementation},
    {"SKManagedStreamDestroyProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663517, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamDestroyProxyImplementation},
    {"SKManagedStreamDuplicateProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663518, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamDuplicateProxyImplementation},
    {"SKManagedStreamForkProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663519, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamForkProxyImplementation},
    {"SKManagedStreamGetLengthProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663520, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamGetLengthProxyImplementation},
    {"SKManagedStreamGetPositionProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663521, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamGetPositionProxyImplementation},
    {"SKManagedStreamHasLengthProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663522, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamHasLengthProxyImplementation},
    {"SKManagedStreamHasPositionProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663523, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamHasPositionProxyImplementation},
    {"SKManagedStreamIsAtEndProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663524, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamIsAtEndProxyImplementation},
    {"SKManagedStreamMoveProxyImplementation#3:SkiaSharp:SkiaSharp:DelegateProxies", 100663525, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamMoveProxyImplementation},
    {"SKManagedStreamPeekProxyImplementation#4:SkiaSharp:SkiaSharp:DelegateProxies", 100663526, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamPeekProxyImplementation},
    {"SKManagedStreamReadProxyImplementation#4:SkiaSharp:SkiaSharp:DelegateProxies", 100663527, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamReadProxyImplementation},
    {"SKManagedStreamRewindProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663528, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamRewindProxyImplementation},
    {"SKManagedStreamSeekProxyImplementation#3:SkiaSharp:SkiaSharp:DelegateProxies", 100663529, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamSeekProxyImplementation},
    {"SKManagedTraceMemoryDumpDumpNumericValueProxyImplementation#6:SkiaSharp:SkiaSharp:DelegateProxies", 100663530, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedTraceMemoryDumpDumpNumericValueProxyImplementation},
    {"SKManagedTraceMemoryDumpDumpStringValueProxyImplementation#5:SkiaSharp:SkiaSharp:DelegateProxies", 100663531, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedTraceMemoryDumpDumpStringValueProxyImplementation},
    {"SKManagedWStreamBytesWrittenProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663532, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedWStreamBytesWrittenProxyImplementation},
    {"SKManagedWStreamDestroyProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663533, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedWStreamDestroyProxyImplementation},
    {"SKManagedWStreamFlushProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663534, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedWStreamFlushProxyImplementation},
    {"SKManagedWStreamWriteProxyImplementation#4:SkiaSharp:SkiaSharp:DelegateProxies", 100663535, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedWStreamWriteProxyImplementation},
    {"SKSurfaceRasterReleaseProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663536, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKSurfaceRasterReleaseProxyImplementation},
    {"TimerHandler#0:System.Private.CoreLib:System.Threading:TimerQueue", 100680379, wasm_native_to_interp_System_Private_CoreLib_System_Threading_TimerQueue_TimerHandler}
};
