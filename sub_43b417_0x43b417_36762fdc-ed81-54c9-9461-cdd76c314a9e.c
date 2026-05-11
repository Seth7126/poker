// ============================================================
// 函数名称: sub_43b417
// 虚拟地址: 0x43b417
// WARP GUID: 36762fdc-ed81-54c9-9461-cdd76c314a9e
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_43bed0, sub_43d3c8, sub_43b53c, sub_43ab7c, sub_43a2fc
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_43b417(char* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4 @ ebp)
{
    // 第一条实际指令: *arg3 += 1
    *arg3 += 1
    *arg1 += arg1.b
    *0x1000000 += arg3:1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    int32_t esi_1 = __builtin_memcpy(&arg4[-8], arg3, 0x10)
    arg4[-0xa] = arg2
    arg4[-0xd] = arg1
    arg4[-0xb] = sub_43bed0(arg4[-0xd])
    arg4[-0xf] = sub_43b53c(arg4[-0xd])
    int32_t eax_3
    eax_3.b = (arg4[3].b & 1) != 0
    *(arg4 - 0x21) = eax_3.b
    void* eax_4
    
    if (*data_530288 s> 4 || (*data_530288 == 4 && *data_530748 s> 0))
        eax_4.b = 1
    else
        eax_4 = nullptr
    
    *(arg4 - 0x59) = eax_4.b
    void* eax_7
    
    if (*data_530288 s<= 4 || *data_530a60 != 2)
        eax_7 = nullptr
    else
        eax_7.b = 1
    
    *(arg4 - 0x61) = eax_7.b
    void* result
    
    if (arg4[-0xb] == 0 || (*(arg4[-0xb] + 0x34) == 0 && arg4[-0xf] == 0)
            || (*(arg4[-0xd] + 0x92) == 0 && *(arg4[-0xd] + 0x8a) == 0))
        char eax_14
        
        if (arg4[-0xb] != 0)
            eax_14 = sub_43d3c8(arg4[-0xb])
        
        if (arg4[-0xb] == 0 || eax_14 != 0)
            result = sub_43ab7c(esi_1, arg4)
        else
            result = sub_43a2fc(esi_1, arg4)
    else
        void* eax_9
        eax_9.b = *(arg4 - 0x21)
        arg4[-0xa]
        (*(*arg4[-0xd] + 0x34))(eax_9)
        result = arg4[-0xd]
        
        if (*(result + 0x92) != 0)
            void* eax_11
            eax_11.w = arg4[3].w
            void* ebx_2 = arg4[-0xd]
            arg4[-0xa]
            arg4[-0xd]
            *(ebx_2 + 0x94)
            result = (*(ebx_2 + 0x90))(eax_11, &arg4[-8])
    
    *arg4
    return result
}
