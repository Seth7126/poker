// ============================================================
// 函数名称: sub_496499
// 虚拟地址: 0x496499
// WARP GUID: 1e170b62-d788-5eb3-b2b8-000b3e399b35
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4033d0, sub_49555c, sub_495068, sub_496630, sub_403428
// [被调用的父级函数]: 无
// ============================================================

char* __convention("regparm")sub_496499(char* arg1, int32_t arg2, int32_t arg3, void* arg4 @ ebp)
{
    // 第一条实际指令: *arg1 += arg1.b
    *arg1 += arg1.b
    *(arg4 - 0x75) += arg2.b
    int32_t eflags
    arg1.b = __in_al_dx(arg2.w, eflags)
    int32_t var_4 = arg3
    int32_t ebx
    int32_t var_8 = ebx
    int32_t esi
    int32_t var_c = esi
    int32_t edi
    int32_t var_10 = edi
    int32_t* esp_1 = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp_1 = &var_20
        arg1 = sub_4033d0(arg3, arg2)
    
    int32_t ebx_1 = arg3
    *(arg4 - 1) = arg2.b
    void* eax = *(arg4 + 8)
    *(arg1 + 0x58) = eax
    
    if (eax != 0)
        ebx_1, arg4 = sub_496630(eax, arg1)
        void* edi_1 = *(arg1 + 0x58)
        
        if (0 != *(edi_1 + 0x28))
            *(arg1 + 0x34) = edi_1
            *(arg1 + 0x30) = sub_4967bc
            *(arg1 + 0x3c) = *(arg1 + 0x58)
            *(arg1 + 0x38) = sub_496810
    
    int32_t ecx_1
    int32_t edx_1
    ecx_1, edx_1 = sub_495068(arg1, 0, ebx_1)
    edx_1.b = 0
    
    if (0 != *(*(arg1 + 0x58) + 0x28))
        sub_49555c(arg1, edx_1, ecx_1)
    
    if (arg1[8] != 0)
        ecx_1.b = 2
        ebx_1.w = 0xffff
        sub_4032ac(arg1, nop)
    
    if (*(arg4 - 1) != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_1
        esp_1 = &esp_1[4]
    
    *esp_1
    esp_1[1]
    esp_1[2]
    esp_1[3]
    esp_1[4]
    return arg1
}
