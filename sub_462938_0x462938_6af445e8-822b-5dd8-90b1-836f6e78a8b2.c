// ============================================================
// 函数名称: sub_462938
// 虚拟地址: 0x462938
// WARP GUID: 6af445e8-822b-5dd8-90b1-836f6e78a8b2
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4627a0, sub_46026c
// [被调用的父级函数]: sub_462bf8
// ============================================================

int32_t* __fastcallsub_462938(int32_t* arg1, int32_t arg2, void* arg3 @ eax, int32_t arg4, int32_t* arg5, int32_t arg6, int32_t arg7)
{
    // 第一条实际指令: int32_t var_c = arg2
    int32_t var_c = arg2
    void* ebx = *(arg3 + 0x149)
    int32_t edx_1 = *(arg3 + 0xe1) * 3
    int32_t* result
    
    while (true)
        result = arg5
        
        if (*result u>= arg4)
            break
        
        result = *arg1
        
        if (result u>= arg7)
            if (*(ebx + 0x30) != 0)
                break
            
            if (*(ebx + 0x34) s< *(ebx + 0x3c))
                void* esi_3 = ebx + 8
                int32_t i = 0
                
                while (*(arg3 + 0x34) s> i)
                    sub_4627a0(*(ebx + 0x34), *(arg3 + 0x18), *esi_3, *(ebx + 0x3c))
                    i += 1
                    esi_3 += 4
                
                *(ebx + 0x34) = *(ebx + 0x3c)
        else
            void* ecx_2 = *(ebx + 0x3c) - *(ebx + 0x34)
            void* edx_3 = arg7 - result
            void* edx_4
            
            edx_4 = edx_3 u<= ecx_2 ? edx_3 : ecx_2
            
            *arg1
            (*(*(arg3 + 0x155) + 4))(edx_4, *(ebx + 0x34))
            
            if (*(arg3 + 0x1c) == *(ebx + 0x30))
                int32_t i_1 = 0
                void* var_20_1 = ebx + 8
                
                while (*(arg3 + 0x34) s> i_1)
                    for (int32_t j = 1; j s<= *(arg3 + 0xe1); j += 1)
                        void* eax_9 = *var_20_1
                        sub_46026c(eax_9, 0, eax_9, *(arg3 + 0x18), 1, neg.d(j))
                    
                    i_1 += 1
                    var_20_1 += 4
            
            *arg1 += edx_4
            *(ebx + 0x34) += edx_4
            *(ebx + 0x30) -= edx_4
        
        if (*(ebx + 0x34) == *(ebx + 0x3c))
            *(ebx + 0x38)
            (*(*(arg3 + 0x159) + 4))(*arg5, arg6)
            *arg5 += 1
            *(ebx + 0x38) += *(arg3 + 0xe1)
            
            if (*(ebx + 0x38) s>= edx_1)
                *(ebx + 0x38) = 0
            
            if (*(ebx + 0x34) s>= edx_1)
                *(ebx + 0x34) = 0
            
            *(ebx + 0x3c) = *(arg3 + 0xe1) + *(ebx + 0x34)
    
    return result
}
