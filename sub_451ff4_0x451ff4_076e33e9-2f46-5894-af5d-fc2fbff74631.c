// ============================================================
// 函数名称: sub_451ff4
// 虚拟地址: 0x451ff4
// WARP GUID: 076e33e9-2f46-5894-af5d-fc2fbff74631
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_451e20, sub_403df8, sub_403fb0, sub_404364
// [被调用的父级函数]: sub_453040
// ============================================================

void*sub_451ff4()
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* var_8 = nullptr
    int32_t* var_14 = &var_4
    int32_t (* var_18)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* eax
    int32_t ecx
    eax, ecx = data_531a70(0x1f02, ExceptionList, var_18, var_14)
    sub_403fb0(ecx, eax)
    void var_10
    int32_t var_c
    void* ebp_1 = sub_451e20(var_8, &var_c, &var_10)
    data_531858 = 1
    data_531859 = 0
    data_53185a = 0
    
    if (*(ebp_1 - 8) s> 0 && *(ebp_1 - 0xc) s> 0)
        data_531859 = 1
        
        if (*(ebp_1 - 0xc) s> 1)
            data_53185a = 1
    
    data_53185b = 0
    data_53185c = 0
    data_53185d = 0
    
    if (data_531e70 != 0)
        var_c = 0x189c0
        char* eax_2
        int32_t ecx_2
        eax_2, ecx_2 = data_531e70(var_c)
        sub_403fb0(ecx_2, eax_2)
        ebp_1 = sub_451e20(*(ebp_1 - 4), ebp_1 - 8, ebp_1 - 0xc)
        data_53185b = 1
        
        if (*(ebp_1 - 0xc) s> 1)
            data_53185c = 1
            
            if (*(ebp_1 - 0xc) s> 2)
                data_53185d = 1
    
    var_c = 0x1f03
    char* eax_5
    int32_t ecx_4
    eax_5, ecx_4 = data_531a70(var_c)
    sub_403fb0(ecx_4, eax_5)
    data_53185e = sub_404364("GL_EXT_abgr", *(ebp_1 - 4)) s> 0
    data_53185f = sub_404364("GL_EXT_bgra", *(ebp_1 - 4)) s> 0
    data_531860 = sub_404364("GL_EXT_packed_pixels", *(ebp_1 - 4)) s> 0
    data_531861 = sub_404364("GL_EXT_paletted_texture", *(ebp_1 - 4)) s> 0
    data_531862 = sub_404364("GL_EXT_vertex_array", *(ebp_1 - 4)) s> 0
    data_531863 = sub_404364("GL_EXT_index_array_formats", *(ebp_1 - 4)) s> 0
    data_531864 = sub_404364("GL_EXT_index_func", *(ebp_1 - 4)) s> 0
    data_531865 = sub_404364("GL_EXT_index_material", *(ebp_1 - 4)) s> 0
    data_531866 = sub_404364("GL_EXT_index_texture", *(ebp_1 - 4)) s> 0
    data_531867 = sub_404364("GL_WIN_swap_hint", *(ebp_1 - 4)) s> 0
    data_531868 = sub_404364("GL_EXT_blend_color", *(ebp_1 - 4)) s> 0
    data_531869 = sub_404364("GL_EXT_blend_logic_op", *(ebp_1 - 4)) s> 0
    data_53186a = sub_404364("GL_EXT_blend_minmax", *(ebp_1 - 4)) s> 0
    data_53186b = sub_404364("GL_EXT_blend_subtract", *(ebp_1 - 4)) s> 0
    data_53186c = sub_404364("GL_EXT_convolution", *(ebp_1 - 4)) s> 0
    data_53186d = sub_404364("GL_EXT_copy_texture", *(ebp_1 - 4)) s> 0
    data_53186e = sub_404364("GL_EXT_histogram", *(ebp_1 - 4)) s> 0
    data_53186f = sub_404364("GL_EXT_polygon_offset", *(ebp_1 - 4)) s> 0
    data_531870 = sub_404364("GL_EXT_subtexture", *(ebp_1 - 4)) s> 0
    data_531871 = sub_404364("GL_EXT_texture_object", *(ebp_1 - 4)) s> 0
    data_531872 = sub_404364("GL_EXT_texture3D", *(ebp_1 - 4)) s> 0
    data_531873 = sub_404364("GL_EXT_cmyka", *(ebp_1 - 4)) s> 0
    data_531874 = sub_404364("GL_EXT_rescale_normal", *(ebp_1 - 4)) s> 0
    data_531875 = sub_404364("GL_SGI_color_matrix", *(ebp_1 - 4)) s> 0
    data_531876 = sub_404364("GL_EXT_texture_color_table", *(ebp_1 - 4)) s> 0
    data_531877 = sub_404364("GL_SGI_color_table", *(ebp_1 - 4)) s> 0
    data_531878 = sub_404364("GL_EXT_clip_volume_hint", *(ebp_1 - 4)) s> 0
    data_531879 = sub_404364("GL_EXT_compiled_vertex_array", *(ebp_1 - 4)) s> 0
    data_53187a = sub_404364("GL_EXT_cull_vertex", *(ebp_1 - 4)) s> 0
    data_53187b = sub_404364("GL_EXT_point_parameters", *(ebp_1 - 4)) s> 0
    data_53187c = sub_404364("GL_EXT_texture_env_add", *(ebp_1 - 4)) s> 0
    data_53187d = sub_404364("GL_EXT_misc_attribute", *(ebp_1 - 4)) s> 0
    data_53187e = sub_404364("GL_EXT_scene_marker", *(ebp_1 - 4)) s> 0
    data_53187f = sub_404364("GL_EXT_shared_texture_palette", *(ebp_1 - 4)) s> 0
    data_531880 = sub_404364("GL_EXT_texture_edge_clamp", *(ebp_1 - 4)) s> 0
    data_531881 = sub_404364("GL_EXT_texture_env_combine", *(ebp_1 - 4)) s> 0
    data_531882 = sub_404364("GL_NV_texgen_reflection", *(ebp_1 - 4)) s> 0
    data_531883 = sub_404364("GL_NV_texture_env_combine4", *(ebp_1 - 4)) s> 0
    data_531884 = sub_404364("GL_ARB_multitexture", *(ebp_1 - 4)) s> 0
    data_531885 = sub_404364("GL_ARB_imaging", *(ebp_1 - 4)) s> 0
    data_531886 = sub_404364("GL_EXT_fog_coord", *(ebp_1 - 4)) s> 0
    data_531887 = sub_404364("GL_EXT_light_max_exponent", *(ebp_1 - 4)) s> 0
    data_531888 = sub_404364("GL_EXT_secondary_color", *(ebp_1 - 4)) s> 0
    data_531889 = sub_404364("GL_EXT_separate_specular_color", *(ebp_1 - 4)) s> 0
    data_53188a = sub_404364("GL_EXT_stencil_wrap", *(ebp_1 - 4)) s> 0
    data_53188b = sub_404364("GL_EXT_texture_cube_map", *(ebp_1 - 4)) s> 0
    data_53188c = sub_404364("GL_EXT_texture_filter_anisotropic", *(ebp_1 - 4)) s> 0
    data_53188d = sub_404364("GL_EXT_texture_lod_bias", *(ebp_1 - 4)) s> 0
    data_53188e = sub_404364("GL_EXT_vertex_weighting", *(ebp_1 - 4)) s> 0
    data_53188f = sub_404364("GL_KTX_buffer_region", *(ebp_1 - 4)) s> 0
    data_531890 = sub_404364("GL_NV_blend_square", *(ebp_1 - 4)) s> 0
    data_531891 = sub_404364("GL_NV_fog_distance", *(ebp_1 - 4)) s> 0
    data_531892 = sub_404364("GL_NV_register_combiners", *(ebp_1 - 4)) s> 0
    data_531893 = sub_404364("GL_NV_texgen_emboss", *(ebp_1 - 4)) s> 0
    data_531894 = sub_404364("GL_NV_vertex_array_range", *(ebp_1 - 4)) s> 0
    data_531895 = sub_404364("GL_SGIS_multitexture", *(ebp_1 - 4)) s> 0
    data_531896 = sub_404364("GL_SGIS_texture_lod", *(ebp_1 - 4)) s> 0
    data_531897 = sub_404364("WGL_EXT_swap_control", *(ebp_1 - 4)) s> 0
    var_c = 0x189c1
    char* eax_65
    int32_t ecx_5
    eax_65, ecx_5 = data_531e70(var_c)
    sub_403fb0(ecx_5, eax_65)
    data_531898 = sub_404364("GLU_EXT_TEXTURE", *(ebp_1 - 4)) s> 0
    data_531899 = sub_404364("GLU_EXT_object_space_tess", *(ebp_1 - 4)) s> 0
    data_53189a = sub_404364("GLU_EXT_nurbs_tessellator", *(ebp_1 - 4)) s> 0
    fsbase->NtTib.ExceptionList = var_8
    __return_addr = sub_45264c
    sub_403df8(ebp_1 - 4)
    return ebp_1 - 4
}
