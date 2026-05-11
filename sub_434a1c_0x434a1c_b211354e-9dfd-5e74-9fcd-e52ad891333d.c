// ============================================================
// 函数名称: sub_434a1c
// 虚拟地址: 0x434a1c
// WARP GUID: b211354e-9dfd-5e74-9fcd-e52ad891333d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_433a98, sub_4030d0, sub_4336a8, sub_4351a4, sub_404080, sub_405ae8, sub_403e1c, sub_40b4b0, sub_4333cc, sub_433370
// [被调用的父级函数]: sub_4349e0, sub_433b34
// ============================================================

int32_t __convention("regparm")sub_434a1c(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    char* var_8 = nullptr
    char* var_c = nullptr
    char* var_10 = nullptr
    char* var_14 = nullptr
    int32_t ebx
    int32_t var_18 = ebx
    int32_t esi
    int32_t var_1c = esi
    int32_t edi
    int32_t var_20 = edi
    int32_t* var_24 = &var_4
    int32_t (* var_28)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg2 == 0)
        sub_405ae8(data_530308, &var_8)
        sub_405ae8(data_52ffec, &var_c)
        sub_404080(&var_8, var_c)
        int32_t edx_3
        edx_3.b = 1
        sub_40b4b0(0x407d24, edx_3, var_8)
        sub_403828()
        noreturn
    
    if (arg2[1] == 0)
        sub_405ae8(data_530308, &var_10)
        sub_405ae8(data_530770, &var_14)
        sub_404080(&var_10, var_14)
        int32_t edx_7
        edx_7.b = 1
        sub_40b4b0(0x407d24, edx_7, var_10)
        sub_403828()
        noreturn
    
    int32_t eax_7 = sub_433370(arg2[5])
    
    if (eax_7 == 1)
        void* eax_8 = *(arg1 + 0x64)
        *(eax_8 + 8) = 0
        *(eax_8 + 0x10) = 0
    else if (eax_7 != 2)
        void* eax_30 = arg2[6]
        
        if (eax_30 != 0)
            *(eax_30 + 0xc) = arg2[3]
            void* edx_25 = arg2[3]
            
            if (edx_25 != 0)
                *(edx_25 + 0x18) = eax_30
            
            void* eax_33 = arg2[6]
            *(eax_33 + 0x20) = arg2[8]
            sub_4336a8(eax_33)
        else
            *(arg2[5] + 8) = arg2[3]
            void* eax_32 = arg2[3]
            *(eax_32 + 0x18) = 0
            sub_4336a8(eax_32)
        
        void* var_30_5 = arg1
        void (__convention("regparm")* var_34_3)(void* arg1, void* arg2) = sub_4351cc
        sub_433a98(arg1, arg2[5])
    else
        int32_t* eax_9 = arg2[6]
        int32_t* edi_1
        
        if (eax_9 != 0)
            edi_1 = eax_9
        else
            edi_1 = arg2[3]
        
        if (edi_1[1] != 0)
            void* eax_10 = arg2[5]
            
            if (*(arg1 + 0x64) != eax_10)
                *(eax_10 + 0x10) = 0
                *(eax_10 + 4) = edi_1[1]
                *(eax_10 + 8) = 0
                sub_4030d0(edi_1)
            else
                *(*(arg1 + 0x64) + 8) = edi_1
                edi_1[6] = 0
                edi_1[3] = 0
                edi_1[8] = sub_4333cc(*(arg1 + 0x64))
                sub_4336a8(edi_1)
            
            void* var_30_3 = arg1
            void (__convention("regparm")* var_34_1)(void* arg1, void* arg2) = sub_4351cc
            sub_433a98(arg1, arg2[5])
        else if (arg2[5] != *(arg1 + 0x64))
            void* eax_24 = *(arg2[5] + 0x18)
            *(edi_1[2] + 0x18) = eax_24
            
            if (eax_24 != 0)
                *(eax_24 + 0xc) = edi_1[2]
            else
                *(*(arg2[5] + 0x14) + 8) = edi_1[2]
            
            void* eax_26 = edi_1[2]
            *(eax_26 + 0x14) = *(arg2[5] + 0x14)
            
            do
                eax_26 = *(eax_26 + 0xc)
                *(eax_26 + 0x14) = *(arg2[5] + 0x14)
            while (*(eax_26 + 0xc) != 0)
            
            *(eax_26 + 0xc) = *(arg2[5] + 0xc)
            
            if (*(eax_26 + 0xc) != 0)
                *(*(eax_26 + 0xc) + 0x18) = eax_26
            
            void* var_30_4 = arg1
            void (__convention("regparm")* var_34_2)(void* arg1, void* arg2) = sub_4351cc
            sub_433a98(arg1, *(eax_26 + 0x14))
            sub_4030d0(arg2[5])
            sub_4030d0(edi_1)
        else
            edi_1[8] = *(arg1 + 0x68)
            *(arg1 + 0x68) = *(*(arg1 + 0x64) + 0x20)
            sub_4030d0(*(arg1 + 0x64))
            *(arg1 + 0x64) = edi_1
            edi_1[3] = 0
            edi_1[6] = 0
            edi_1[5] = 0
            sub_4351a4(arg1)
    
    sub_4030d0(arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_434c79
    return sub_403e1c(&var_14, 4)
}
