// ============================================================
// 函数名称: sub_4138b8
// 虚拟地址: 0x4138b8
// WARP GUID: 50522326-e919-5df0-a21e-7f29189f5607
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_41383c, sub_41316c, sub_40e150, sub_403e90, sub_410670, sub_403df8, sub_410524, sub_4131b4, sub_41085c, sub_4139fc
// [被调用的父级函数]: sub_4140e4
// ============================================================

int32_t* __convention("regparm")sub_4138b8(void* arg1)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t* ebp_1 = &var_4
    int32_t ebx
    int32_t var_14 = ebx
    int32_t esi
    int32_t var_18 = esi
    int32_t edi
    int32_t var_1c = edi
    int32_t var_c = 0
    int32_t* var_20 = &var_4
    int32_t (* var_24)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList_1 = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList_1
    void* eax_1 = *(arg1 + 0x30)
    
    if (eax_1 == 0)
        fsbase->NtTib.ExceptionList = ExceptionList_1
        int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_4139d3
        int32_t* result = &var_c
        sub_403df8(result)
        return result
    
    int32_t* var_2c = &var_4
    int32_t (* var_30)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = *(eax_1 + 8) - 1
    
    if (eax_3 s>= 0)
        int32_t var_10_1 = eax_3 + 1
        int32_t esi_1 = 0
        int32_t i
        
        do
            void* eax_7 = sub_410524(*(ebp_1[-1] + 0x30), esi_1)
            sub_403e90(&ebp_1[-2], *(eax_7 + 0x14))
            (*(*ebp_1[-1] + 0x20))()
            esp_1 = &esp_1[0xb]
            int32_t* eax_11
            void* ebp_2
            eax_11, ebp_2 = sub_4131b4(*(eax_7 + 8), ebp_1[-2])
            int32_t edi_2
            ebp_1, edi_2 = sub_41383c(sub_410524(*(*(ebp_2 - 4) + 0x30), esi_1))
            char eax_16
            
            if (edi_2 == 0)
                eax_16 = sub_41316c(eax_7)
            
            if (edi_2 != 0 || eax_16 == 0)
                sub_40e150(*(eax_7 + 4), *(eax_7 + 0xc), edi_2)
            else
                int32_t eax_19 = sub_410524(*(ebp_1[-1] + 0x30), esi_1)
                ebp_1 = sub_41085c(data_531630, eax_19)
                sub_410670(*(ebp_1[-1] + 0x30), esi_1, 0)
            
            esi_1 += 1
            i = ebp_1[-3]
            ebp_1[-3] -= 1
        while (i != 1)
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = 0x4139b6
    return sub_4139fc(ebp_1[-1])
}
