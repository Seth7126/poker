// ============================================================
// 函数名称: sub_4b0b67
// 虚拟地址: 0x4b0b67
// WARP GUID: d6b88856-5676-5d31-9020-5f8c9a6167ea
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a0cb0, sub_4a0c6c, sub_4a0c80, sub_49f714, sub_403e4c, sub_4a0b84, sub_4a0a84, sub_403df8, sub_403e1c, sub_49df54, sub_403010
// [被调用的父级函数]: 无
// ============================================================

void*sub_4b0b67(void* arg1, char* arg2, int16_t arg3, char* arg4, void* arg5)
{
    // 第一条实际指令: int32_t temp1 = *0x41000000
    int32_t temp1 = *0x41000000
    *0x41000000 -= 1
    
    if (temp1 != 1)
        trap(0xd)
    
    int32_t var_4
    __builtin_strncpy(&var_4, "oriz", 4)
    void* const esi = __return_addr
    void* ebp = arg1
    char* ebx = arg2
    char* arg_18
    char* eax = arg_18
    void* esp_8
    
    if (temp1 == 1)
        esp_8 = arg5
        goto label_4b0be1
    
    int32_t eflags
    uint16_t* esi_1 = __outsd(arg3, *esi, esi, eflags)
    int32_t esi_2 = __outsb(arg3, *esi_1, esi_1, eflags)
    *eax += eax.b
    *(ebp - 0x75) += arg3.b
    eax.b = __in_al_dx(arg3, eflags)
    arg_18 = arg4
    int32_t* esp_1 = &arg_18
    int32_t i_2 = 4
    int32_t i
    
    do
        *(esp_1 - 4) = 0
        *(esp_1 - 8) = 0
        esp_1 -= 8
        i = i_2
        i_2 -= 1
    while (i != 1)
    int32_t temp0_2 = *(ebp - 4)
    *(ebp - 4) = i_2
    *(esp_1 - 4) = ebx
    *(esp_1 - 8) = esi_2
    *(esp_1 - 0xc) = 0x7a69726f
    *(ebp - 4) = temp0_2
    ebx = eax
    *(esp_1 - 0x10) = ebp
    *(esp_1 - 0x14) = j_sub_4037f0
    TEB* fsbase
    *(esp_1 - 0x18) = fsbase->NtTib.ExceptionList
    esp_8 = esp_1 - 0x18
    fsbase->NtTib.ExceptionList = esp_8
    
    if (*(*(ebx + 0x10c) + 4) != 0)
    label_4b0c68:
        void* const eax_1
        
        if (*(ebx + 0x13a) != 0 || (ebx[0x101] & 1) != 0)
            eax_1.b = 1
        else
            eax_1 = nullptr
        
        *(ebp - 5) = eax_1.b
        
        if (*(ebp - 5) != 0)
            void* eax_14 = *(ebx + 0x10c)
            int32_t* esi_5 = *(eax_14 + 4)
            *(eax_14 + 0x14)
            (*(*esi_5 + 0x18))()
            *(*(ebx + 0x10c) + 8)
            (*(*esi_5 + 0x14))()
            (*(*esi_5 + 0x24))()
            sub_49f714(esi_5[3], sub_4b0ddf+5, *(ebp - 0x1c))
            *(*(ebp - 4) + 0x5c)
            sub_4a0b84(esi_5)
            *(ebp - 5) = 0
            
            while (true)
                char eax_24 = sub_4a0c6c(*(*(ebx + 0x10c) + 4))
                
                if (eax_24 u< 1)
                    if (*(ebx + 0x13a) == 0)
                        *(ebp - 5) = 0
                        break
                    
                    void* eax_25 = *(ebx + 0x10c)
                    *(eax_25 + 0x14)
                    (*(**(eax_25 + 4) + 0x18))()
                    void* eax_27 = *(ebx + 0x10c)
                    *(eax_27 + 8)
                    (*(**(eax_27 + 4) + 0x14))()
                    *(esp_8 - 4) = ebp - 5
                    *(*(ebx + 0x10c) + 4)
                    *(ebx + 0x13c)
                    (*(ebx + 0x138))()
                    
                    if (*(ebp - 5) == 0)
                        break
                    
                    void* esi_6 = *(ebx + 0x10c)
                    *(esi_6 + 0x18) = 1
                    sub_4a0cb0(*(esi_6 + 4))
                    sub_403e4c(*(ebx + 0x10c) + 0x14, *(ebp - 0x20))
                    sub_4a0c80(*(*(ebx + 0x10c) + 4))
                    sub_403e4c(*(ebx + 0x10c) + 8, *(ebp - 0x24))
                else
                    if (eax_24 == 1)
                        *(ebp - 5) = 1
                        break
                    
                    if (eax_24 == 2)
                        *(ebp - 5) = 0
                        break
    else
        int32_t eax_4
        int32_t edx_2
        eax_4, edx_2 = (*(**(*(ebp - 4) + 0x5c) + 0x14))()
        
        if (add_overflow(eax_4, 0xffffffff))
            sub_403010()
            noreturn
        
        if (eax_4 - 1 s>= 0)
            esi = eax_4
            *(ebp - 0xc) = 0
            void* const i_1
            
            do
                eax = *(*(ebp - 4) + 0x5c)
            label_4b0be1:
                *(ebp - 0xc)
                (*(*eax + 0xc))()
                *(esp_8 - 4) = 1
                *(esp_8 - 8) = ebp - 0x18
                int32_t ecx_3
                ecx_3.b = 1
                void* ecx_4
                int32_t edx_5
                ecx_4, edx_5 = sub_49df54(ecx_3, &data_4b0dd8, ebp - 0x10)
                void** eax_9
                eax_9, edx_2, ebp = sub_4a0a84(*(ebp - 0x18), edx_5, ecx_4)
                *(ebp - 0x14) = eax_9
                
                if (*(ebp - 0x14) != 0)
                    break
                
                *(ebp - 0xc) += 1
                i_1 = esi
                esi -= 1
            while (i_1 != 1)
        
        if (*(ebp - 0x14) != 0)
            if (*(ebx + 0x12a) != 0)
                *(esp_8 - 4) = *(*(ebp - 4) + 0x5c)
                *(ebx + 0x12c)
                (*(ebx + 0x128))()
            
            edx_2.b = 1
            *(*(ebx + 0x10c) + 4) = (*(*(ebp - 0x14) + 0x1c))()
            goto label_4b0c68
        
        *(ebp - 5) = 0
    
    *(esp_8 + 8)
    fsbase->NtTib.ExceptionList = *esp_8
    *(esp_8 + 8) = sub_4b0dc5
    sub_403e1c(ebp - 0x24, 4)
    sub_403df8(ebp - 0x10)
    return ebp - 0x10
}
