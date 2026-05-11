// ============================================================
// 函数名称: sub_527230
// 虚拟地址: 0x527230
// WARP GUID: 35897aeb-3896-5696-91e2-ab8f0d861102
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_514068, sub_50d318, sub_4c0924, sub_4837d0, sub_403010
// [被调用的父级函数]: sub_4ed7a0, sub_4e6659, sub_4ce468, sub_4bdf6c, sub_527454, sub_4e649b
// ============================================================

void* __fastcallsub_527230(int32_t arg1, char arg2, void* arg3 @ eax, char arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: if (sub_4c0924() != 0)
    if (sub_4c0924() != 0)
        *(*data_530454 + 0x1b4) = 0
    
    void* result = nullptr
    
    if (arg2 == 1)
        int16_t* esi_2
        int16_t* edi_2
        edi_2, esi_2 = __builtin_memcpy(arg3 + 0x10280, arg5, 0x318)
        *edi_2 = *esi_2
    
    if (arg2 == 0 && *(arg3 + 0x1026d) != 0)
        result.b = 1
    
    if (arg2 == 3 && *(arg3 + 0x1026c) != 0)
        result.b = 1
    
    if (arg2 == 2)
        result.b = 1
    
    if (arg2 == 4)
        result.b = 1
    
    if (arg2 == 6)
        result.b = 1
    
    if (result.b != 0)
        *(arg3 + 0x1014c) = 0
        *(arg3 + 0x1015e) = arg1.w
        *(arg3 + 0x10160) = arg6.w
        *(arg3 + 0x10162) = arg2
        sub_4837d0(*data_530304, *data_530658)
        result = sub_4c0924()
        
        if (result.b != 0 && arg4 == 0)
            if (*(*data_5301f4 + 0x10020) == 1)
                return sub_514068(arg1, arg2, *data_530454, arg6)
            
            result = sub_50d318(*data_530454)
            
            if (result.b != 0)
                void* eax_12 = *data_5301f4
                *(eax_12 + 0x10020)
                result = *(eax_12 + 0x10020) * 0xa9
                bool o_1 = unimplemented  {imul eax, dword [eax+0x10020], 0xa9}
                
                if (o_1)
                    sub_403010()
                    noreturn
                
                if (*(*data_5301f4 + (result << 2) + 0x2a8) == 1)
                    return sub_514068(arg1, arg2, *data_530454, arg6)
    
    return result
}
