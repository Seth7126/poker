// ============================================================
// 函数名称: sub_4627d8
// 虚拟地址: 0x4627d8
// WARP GUID: 70a84887-937e-5f7f-bc21-7ac9eb02594a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4627a0
// [被调用的父级函数]: sub_462bf8
// ============================================================

void** __fastcallsub_4627d8(int32_t* arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4, int32_t* arg5, void** arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t var_8 = arg2
    int32_t var_8 = arg2
    void* esi = *(arg3 + 0x149)
    void** result
    
    while (true)
        result = *arg1
        
        if (result u>= arg7)
            break
        
        if (*arg5 u>= arg4)
            break
        
        void* ecx_1 = *(arg3 + 0xe1) - *(esi + 0x34)
        void* edx_1 = arg7 - result
        void* edx_2
        
        edx_2 = edx_1 u<= ecx_1 ? edx_1 : ecx_1
        
        *arg1
        (*(*(arg3 + 0x155) + 4))(edx_2, *(esi + 0x34))
        *arg1 += edx_2
        *(esi + 0x34) += edx_2
        *(esi + 0x30) -= edx_2
        
        if (*(esi + 0x30) == 0 && *(esi + 0x34) s< *(arg3 + 0xe1))
            int32_t i = 0
            void* var_14_1 = esi + 8
            
            while (i s< *(arg3 + 0x34))
                sub_4627a0(*(esi + 0x34), *(arg3 + 0x18), *var_14_1, *(arg3 + 0xe1))
                i += 1
                var_14_1 += 4
            
            *(esi + 0x34) = *(arg3 + 0xe1)
        
        if (*(esi + 0x34) == *(arg3 + 0xe1))
            (*(*(arg3 + 0x159) + 4))(*arg5, arg6)
            *(esi + 0x34) = 0
            *arg5 += 1
        
        if (*(esi + 0x30) == 0)
            if (*arg5 u< arg4)
                result = arg6
                void* esi_1 = *(arg3 + 0x3c)
                int32_t i_1 = 0
                void** result_1 = result
                
                while (i_1 s< *(arg3 + 0x34))
                    int32_t eax_12 = *(esi_1 + 0xc)
                    result = sub_4627a0(*arg5 * eax_12, *(esi_1 + 0x1c) << 3, *result_1, eax_12 * arg4)
                    result_1 = &result_1[1]
                    i_1 += 1
                    esi_1 += 0x54
                
                *arg5 = arg4
                break
    
    return result
}
