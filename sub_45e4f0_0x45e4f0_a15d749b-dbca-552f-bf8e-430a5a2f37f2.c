// ============================================================
// 函数名称: sub_45e4f0
// 虚拟地址: 0x45e4f0
// WARP GUID: a15d749b-dbca-552f-bf8e-430a5a2f37f2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_45c964
// ============================================================

void* __fastcallsub_45e4f0(int16_t* arg1, void* arg2, void* arg3 @ eax, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_5c = ebx
    char* eax_1 = *(arg3 + 0x136) + 0x80
    void var_58
    void* eax_2 = &var_58
    void* var_c = *(arg2 + 0x50)
    
    for (int32_t i = 8; i s> 0; i -= 1)
        if (i != 6 && i != 4 && i != 2)
            ebx.w = arg1[8]
            ebx.w |= arg1[0x18]
            ebx.w |= arg1[0x28]
            ebx.w |= arg1[0x38]
            
            if (ebx.w != 0)
                int32_t ebx_5 = (sx.d(*arg1) * *var_c) << 0xf
                int32_t esi_6 = sx.d(arg1[0x38]) * *(var_c + 0xe0) * 0xffffe8ee
                    + sx.d(arg1[0x28]) * *(var_c + 0xa0) * 0x1b37
                    + sx.d(arg1[0x18]) * *(var_c + 0x60) * 0xffffd746
                int32_t esi_7 = esi_6 + sx.d(arg1[8]) * *(var_c + 0x20) * 0x73fc
                *eax_2 = (ebx_5 + esi_7 + 0x1000) s>> 0xd
                *(eax_2 + 0x20) = (ebx_5 - esi_7 + 0x1000) s>> 0xd
            else
                ebx = (sx.d(*arg1) * *var_c) << 2
                *eax_2 = ebx
                *(eax_2 + 0x20) = ebx
        
        arg1 = &arg1[1]
        var_c += 4
        eax_2 += 4
    
    void* result = &var_58
    int32_t* var_18 = arg5
    
    for (int32_t i_1 = 0; i_1 s< 2; )
        char* ecx_3 = *var_18 + arg4
        
        if ((*(result + 4) | *(result + 0xc) | *(result + 0x14) | *(result + 0x1c)) != 0)
            int32_t ebx_38 = *result << 0xf
            int32_t esi_12 = *(result + 0x1c) * 0xffffe8ee + *(result + 0x14) * 0x1b37
                + *(result + 0xc) * 0xffffd746 + *(result + 4) * 0x73fc
            int32_t ebx_52
            ebx_52.b = eax_1[(ebx_38 + esi_12 + 0x80000) s>> 0x14 & 0x3ff]
            *ecx_3 = ebx_52.b
            result += 0x20
            int32_t ebx_57
            ebx_57.b = eax_1[(ebx_38 - esi_12 + 0x80000) s>> 0x14 & 0x3ff]
            ecx_3[1] = ebx_57.b
        else
            int32_t ebx_36 = (*result + 0x10) s>> 5 & 0x3ff
            result += 0x20
            ebx_36.b = eax_1[ebx_36]
            char var_11_1 = ebx_36.b
            ebx_36.b = var_11_1
            *ecx_3 = ebx_36.b
            ebx_36.b = var_11_1
            ecx_3[1] = ebx_36.b
        
        i_1 += 1
        var_18 = &var_18[1]
    
    return result
}
