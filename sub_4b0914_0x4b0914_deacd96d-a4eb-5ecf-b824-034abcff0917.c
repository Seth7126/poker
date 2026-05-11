// ============================================================
// 函数名称: sub_4b0914
// 虚拟地址: 0x4b0914
// WARP GUID: deacd96d-a4eb-5ecf-b824-034abcff0917
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a0cb0, sub_4a0c6c, sub_4a0c80, sub_49f714, sub_403e4c, sub_4a0b84, sub_4a0a84, sub_403df8, sub_403e1c, sub_49df54, sub_403010
// [被调用的父级函数]: 无
// ============================================================

void* __convention("regparm")sub_4b0914(struct _EXCEPTION_REGISTRATION_RECORD* arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_30 = ebx
    int32_t esi
    int32_t var_34 = esi
    int32_t edi
    int32_t var_38 = edi
    int32_t var_2c = 0
    int32_t var_28 = 0
    int32_t var_24 = 0
    int32_t var_20 = 0
    int32_t var_18 = 0
    struct _EXCEPTION_REGISTRATION_RECORD* var_8 = arg1
    int32_t* var_3c = &var_4
    int32_t (* var_40)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(arg2 + 0x84) != 0)
    label_4b0a13:
        void* const eax_14
        
        if (*(ebp_1[-1] + 0x132) != 0 || (*(ebp_1[-1] + 0x101) & 1) != 0)
            eax_14.b = 1
        else
            eax_14 = nullptr
        
        *(ebp_1 - 9) = eax_14.b
        
        if (*(ebp_1 - 9) != 0)
            int32_t* esi_4 = *(arg2 + 0x84)
            *(arg2 + 0x74)
            (*(*esi_4 + 0x18))()
            *(arg2 + 0x68)
            (*(*esi_4 + 0x14))()
            (*(*esi_4 + 0x24))()
            sub_49f714(esi_4[3], sub_4b0b67+5, ebp_1[-8])
            *(ebp_1[-2] + 0x60)
            sub_4a0b84(esi_4)
            *(ebp_1 - 9) = 0
            
            while (true)
                char eax_22 = sub_4a0c6c(*(arg2 + 0x84))
                
                if (eax_22 u< 1)
                    if (*(ebp_1[-1] + 0x132) == 0)
                        *(ebp_1 - 9) = 0
                        break
                    
                    *(arg2 + 0x74)
                    (*(**(arg2 + 0x84) + 0x18))()
                    *(arg2 + 0x68)
                    (*(**(arg2 + 0x84) + 0x14))()
                    *(esp_1 - 4) = ebp_1 - 9
                    void* esi_5 = ebp_1[-1]
                    *(arg2 + 0x84)
                    ebp_1[-1]
                    *(esi_5 + 0x134)
                    (*(esi_5 + 0x130))()
                    
                    if (*(ebp_1 - 9) == 0)
                        break
                    
                    *(arg2 + 0x7c) = 1
                    sub_4a0cb0(*(arg2 + 0x84))
                    sub_403e4c(arg2 + 0x74, ebp_1[-9])
                    sub_4a0c80(*(arg2 + 0x84))
                    sub_403e4c(arg2 + 0x68, ebp_1[-0xa])
                else
                    if (eax_22 == 1)
                        *(ebp_1 - 9) = 1
                        break
                    
                    if (eax_22 == 2)
                        *(ebp_1 - 9) = 0
                        break
    else
        int32_t var_1c_1 = 0
        int32_t i_2
        int32_t edx_1
        i_2, edx_1 = (*(**(arg3 + 0x60) + 0x14))()
        esp_1 = &var_8
        
        if (add_overflow(i_2, 0xffffffff))
            sub_403010()
            noreturn
        
        if (i_2 - 1 s>= 0)
            int32_t i_1 = i_2
            int32_t var_14_1 = 0
            int32_t i
            
            do
                ebp_1[-4]
                (*(**(ebp_1[-2] + 0x60) + 0xc))()
                int32_t ecx_1
                ecx_1.b = 1
                void* ecx_2
                int32_t edx_3
                ecx_2, edx_3 = sub_49df54(ecx_1, 0x4b0b60, &ebp_1[-5], &ebp_1[-7], 1)
                esp_1 = &var_8
                void** eax_7
                eax_7, edx_1, ebp_1 = sub_4a0a84(ebp_1[-7], edx_3, ecx_2)
                ebp_1[-6] = eax_7
                
                if (ebp_1[-6] != 0)
                    break
                
                ebp_1[-4] += 1
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        if (ebp_1[-6] != 0)
            if (*(ebp_1[-1] + 0x122) != 0)
                void* esi_3 = ebp_1[-1]
                ebp_1[-1]
                *(esi_3 + 0x124)
                (*(esi_3 + 0x120))(*(ebp_1[-2] + 0x60))
                esp_1 = &var_8
            
            edx_1.b = 1
            *(arg2 + 0x84) = (*(ebp_1[-6] + 0x1c))()
            goto label_4b0a13
        
        *(ebp_1 - 9) = 0
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_4b0b4c
    sub_403e1c(&ebp_1[-0xa], 4)
    sub_403df8(&ebp_1[-5])
    return &ebp_1[-5]
}
