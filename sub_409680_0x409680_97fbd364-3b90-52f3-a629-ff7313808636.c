// ============================================================
// 函数名称: sub_409680
// 虚拟地址: 0x409680
// WARP GUID: 97fbd364-3b90-52f3-a629-ff7313808636
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_409762, sub_409a5d, sub_4097ab, sub_409674
// [被调用的父级函数]: sub_40a128, sub_409af4, sub_409aac, sub_409a78
// ============================================================

void* __fastcallsub_409680(char* arg1, void* arg2, char* arg3 @ eax, int32_t arg4 @ esi, int32_t arg5 @ edi, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t* ebp = &__saved_ebp
    int32_t var_14 = 0
    char* edi = arg3
    char* esi = arg1
    void* ecx = &arg1[arg6]
    char* var_8 = edi
    int32_t var_c = 0
    int32_t var_10 = 0
    int32_t var_14_1 = 0
    label_4096a4:
    void* edx = arg2
    
    if (edx != 0)
        while (esi != ecx)
            uint32_t eax
            eax.b = *esi
            esi = &esi[1]
            
            if (eax.b == 0x25)
                if (esi == ecx)
                    break
                
                eax.b = *esi
                esi = &esi[1]
                
                if (eax.b != 0x25)
                    void* ebx_1 = &esi[0xfffffffe]
                    void* var_18_1 = ebx_1
                    
                    while (true)
                        char var_19_1 = eax.b
                        
                        if (eax.b == 0x2d)
                            if (esi == ecx)
                                goto label_4096b8
                            
                            eax.b = *esi
                            esi = &esi[1]
                        
                        eax, ecx, edx = sub_409762(eax, edx, ecx, ebp, esi, edi, arg5, arg4, 0)
                        
                        if (eax.b != 0x3a)
                            if (eax.b == 0x2e)
                                if (esi == ecx)
                                    break
                                
                                eax.b = *esi
                                esi = &esi[1]
                                eax, ecx, edx = sub_409762(eax, edx, ecx, ebp, esi, edi)
                            
                            int32_t var_24_1 = 0xffffffff
                            char* var_28_1 = esi
                            void* count
                            eax, count = sub_4097ab(eax.b, ebp)
                            void* edx_1 = edx
                            void* count_3 = ebx_1 - count
                            
                            if (ebx_1 u< count)
                                count_3 = nullptr
                            
                            if (var_19_1 == 0x2d)
                                void* temp4_1 = edx_1
                                edx_1 -= count
                                
                                if (temp4_1 u< count)
                                    count += edx_1
                                    edx_1 = nullptr
                                
                                edi, esi, count = __builtin_memcpy(edi, esi, count)
                            
                            void* count_1 = count_3
                            void* edx_2 = edx_1 - count_1
                            
                            if (edx_1 u< count_1)
                                count_1 += edx_2
                                edx_2 = nullptr
                            
                            eax.b = 0x20
                            int32_t ecx_1
                            int32_t edi_1
                            edi_1, ecx_1 = __builtin_memset(edi, 0x20, count_1)
                            void* count_2 = count
                            arg2 = edx_2 - count_2
                            
                            if (edx_2 u< count_2)
                                count_2 += arg2
                                arg2 = nullptr
                            
                            edi = __builtin_memcpy(edi_1, esi, count_2)
                            
                            if (var_10 != 0)
                                sub_409674(&var_10)
                            
                            esi = var_28_1
                            goto label_4096a4
                        
                        void* var_c_1 = ebx_1
                        
                        if (esi == ecx)
                            goto label_4096b8
                        
                        eax.b = *esi
                        esi = &esi[1]
                    
                    break
            
            *edi = eax.b
            edi = &edi[1]
            void* temp1_1 = edx
            edx -= 1
            
            if (temp1_1 == 1)
                break
    
    label_4096b8:
    void* result = edi - var_8
    sub_409a5d(result, ebp)
    return result
}
