// ============================================================
// 函数名称: sub_4abbb0
// 虚拟地址: 0x4abbb0
// WARP GUID: 3641de6c-c004-5591-8cc4-2d6a36e8633d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403828, sub_403248, sub_403260, sub_4ac04c, sub_4ac17c, sub_4ac224, sub_404138, sub_4a5414, sub_4ac1f4, sub_408e1c, sub_405ae8, sub_4ac1c4, sub_40b4b0, sub_403e1c
// [被调用的父级函数]: sub_4ab1c0
// ============================================================

int32_t __convention("regparm")sub_4abbb0(void* arg1, char* arg2, void* arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    void* const var_24
    __builtin_memset(&var_24, 0, 0x20)
    int32_t ebx
    int32_t var_28 = ebx
    int32_t esi
    int32_t var_2c = esi
    int32_t edi
    int32_t var_30 = edi
    int32_t* var_34 = &var_4
    int32_t (* var_38)(void* arg1, void* arg2) = j_sub_4037f0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = (*data_530194)(*(arg3 + 0x24), ExceptionList, var_38, var_34)
    *(arg1 + 0x14) = eax_3
    
    if (eax_3 != 0)
        char* var_10
        
        if (sub_4a5414(eax_3, arg1) s<= 0)
            sub_405ae8(data_530848, &var_10)
            int32_t edx_2
            edx_2.b = 1
            sub_40b4b0(sub_4aa582+0x6e, edx_2, var_10)
            sub_403828()
            noreturn
        
        *(arg1 + 0x10) = arg3
        char* var_c = arg2
        var_10 = *(arg1 + 0x14)
        (*data_530190)(var_10, var_c, arg2)
        var_c = *(arg1 + 0x14)
        char* var_14
        
        if ((*data_5301a8)(var_c) s<= 0)
            sub_405ae8(data_530868, &var_14)
            int32_t edx_4
            edx_4.b = 1
            sub_40b4b0(sub_4aa582+0xd2, edx_4, var_14)
            sub_403828()
            noreturn
        
        var_c = "Cipher: name = "
        char* var_18
        sub_4ac1c4(sub_4ac04c(arg1), &var_18)
        var_10 = var_18
        var_14 = &data_4abd68
        var_18 = "description = "
        int32_t var_1c
        sub_4ac17c(sub_4ac04c(arg1), &var_1c)
        var_1c = var_1c
        void* const var_20 = &data_4abd68
        var_24 = "bits = "
        void* eax_21
        int32_t ecx_4
        int32_t edx_7
        eax_21, ecx_4, edx_7 = sub_4ac04c(arg1)
        sub_408e1c(sub_4ac1f4(eax_21, edx_7, ecx_4), &var_20)
        void* const var_28_1 = var_20
        void* const var_2c_1 = &data_4abd68
        void* const var_30_1 = &data_4abd9c
        sub_4ac224(sub_4ac04c(arg1), &var_24)
        void* const var_34_1 = var_24
        void* const var_38_1 = &data_4abd68
        sub_404138(&var_c, 0xc)
        int32_t* esi_2 = *(arg1 + 0xc)
        
        if (sub_403248(esi_2, 0x4a9fcc) != 0)
            sub_403260(esi_2, 0x4a9fcc)
            (*(*esi_2 + 0x44))()
    
    fsbase->NtTib.ExceptionList = arg2
    __return_addr = sub_4abd40
    return sub_403e1c(&var_24, 7)
}
