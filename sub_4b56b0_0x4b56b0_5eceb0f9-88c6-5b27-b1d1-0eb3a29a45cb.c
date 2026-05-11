// ============================================================
// 函数名称: sub_4b56b0
// 虚拟地址: 0x4b56b0
// WARP GUID: 5eceb0f9-88c6-5b27-b1d1-0eb3a29a45cb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: gethostname, gethostbyname, inet_ntoa
// [内部子函数调用]: sub_403fb0, sub_403df8, sub_403010
// [被调用的父级函数]: sub_4e6659, sub_4e649b
// ============================================================

int32_t* __convention("regparm")sub_4b56b0(int32_t* arg1)
{
    // 第一条实际指令: sub_403df8(arg1)
    sub_403df8(arg1)
    void var_48
    gethostname(&var_48, 0x40)
    int32_t* result = gethostbyname(&var_48)
    
    if (result != 0)
        int32_t esi_1 = result[3]
        int32_t ebx_1 = 0
        
        while (true)
            int32_t* edi_1 = *(esi_1 + (ebx_1 << 2))
            
            if (edi_1 == 0)
                break
            
            char* eax_1
            int32_t ecx_1
            eax_1, ecx_1 = inet_ntoa(*edi_1)
            result = arg1
            sub_403fb0(ecx_1, eax_1)
            int32_t temp0_1 = ebx_1
            ebx_1 += 1
            
            if (add_overflow(temp0_1, 1))
                sub_403010()
                noreturn
    
    return result
}
