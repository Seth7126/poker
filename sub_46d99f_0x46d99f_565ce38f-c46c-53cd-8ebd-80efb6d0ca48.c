// ============================================================
// 函数名称: sub_46d99f
// 虚拟地址: 0x46d99f
// WARP GUID: 565ce38f-c46c-53cd-8ebd-80efb6d0ca48
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_404138, sub_46accc, sub_402c90, sub_46f698, sub_408e1c, sub_40287c, sub_403e1c, sub_403010
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_46d99f(int32_t* arg1, int16_t arg2, void* arg3 @ ebp, int32_t arg4 @ edi)
{
    // 第一条实际指令: *(arg1 * 2) += 1
    *(arg1 * 2) += 1
    *arg1 += arg1.b
    int32_t eflags
    TEB* fsbase
    int16_t temp0
    temp0, eflags = __arpl_memw_gpr16(*(fsbase + arg4), arg3.w)
    *(fsbase + arg4) = temp0
    *arg1 += arg1.b
    *(arg3 - 0x75) += arg2.b
    arg1.b = __in_al_dx(arg2, eflags)
    int32_t ebx
    int32_t var_80 = ebx
    int32_t esi
    int32_t var_84 = esi
    int32_t var_88 = arg4
    __builtin_memset(arg3 - 0x14, 0, 0x14)
    void* var_8c = arg3
    int32_t (* var_90)(void* arg1, void* arg2) = j_sub_4037f0
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    struct _EXCEPTION_REGISTRATION_RECORD** esp_1 = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi_1 = arg1[0x435]
    int32_t esi_2 = esi_1 + 1
    
    if (add_overflow(esi_1, 1))
        sub_403010()
        noreturn
    
    int32_t edi = arg1[0x2ad]
    
    if (edi s>= esi_2)
        int32_t i_1 = edi - esi_2 + 1
        int32_t i
        
        do
            if (esi_2 != 0x2c)
                *(esp_1 - 4) = arg1[0x299]
                *(esp_1 - 8) = "\data\settings\di_"
                sub_408e1c(esi_2, arg3 - 8)
                *(esp_1 - 0xc) = *(arg3 - 8)
                *(esp_1 - 0x10) = ".dco"
                sub_404138(arg3 - 4, 4)
            
            *(esp_1 - 4) = "Load dialog elements from "
            *(esp_1 - 8) = *(arg3 - 4)
            *(esp_1 - 0xc) = &data_46db54
            sub_408e1c(esi_2, arg3 - 0x10)
            *(esp_1 - 0x10) = *(arg3 - 0x10)
            *(esp_1 - 0x14) = &data_46db60
            sub_408e1c(arg1[0x2ad], arg3 - 0x14)
            *(esp_1 - 0x18) = *(arg3 - 0x14)
            *(esp_1 - 0x1c) = &data_46db6c
            sub_404138(arg3 - 0xc, 7)
            *(arg3 - 0xc)
            sub_46accc()
            *(esp_1 - 0x10) = arg3 - 0x7c
            bool o_1 = unimplemented  {imul eax, esi, 0x1038}
            
            if (o_1)
                sub_403010()
                noreturn
            
            sub_40287c(1, 1, arg1[0x2ac] + esi_2 * 0x81c0 + 0x813c)
            esp_1 -= 0xc
            int32_t ecx_2
            ecx_2.b = *(arg3 - 0x7c)
            sub_402c90(arg3 - 0x7c, 0x46db70, ecx_2 + 1)
            
            if (ecx_2 != 0xffffffff)
                *(esp_1 - 4) = 0
                sub_46f698(*(arg3 - 4), esi_2, i_1)
            
            sub_46accc()
            esi_2 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    esp_1[2]
    fsbase->NtTib.ExceptionList = *esp_1
    esp_1[2] = sub_46daf5
    return sub_403e1c(arg3 - 0x14, 5)
}
