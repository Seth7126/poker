// ============================================================
// 函数名称: sub_41dae0
// 虚拟地址: 0x41dae0
// WARP GUID: f138e48e-4e5e-5455-9cbc-6921052802c1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_41b0b8, sub_4030a0, sub_41d040, sub_403428
// [被调用的父级函数]: sub_454540, sub_41fc28, sub_52c7c8, sub_41932c, sub_4375ac, sub_491a48, sub_453ff8, sub_43bd70, sub_453acc, sub_43709c, sub_43be08, sub_437e28, sub_4377d0, sub_4373c4, sub_4b48f3, sub_43ab7c, sub_43a2fc, sub_44bb04
// ============================================================

int32_t* __convention("regparm")sub_41dae0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t edi
    int32_t var_c = edi
    int32_t* esp_1 = &var_c
    
    if (arg2.b != 0)
        void var_1c
        esp_1 = &var_1c
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    int32_t ecx_1
    int32_t edx
    ecx_1, edx = sub_41b0b8(arg1, 0)
    arg1[0xb] = 0x20000000
    edx.b = 1
    void* eax_2
    int32_t edx_1
    eax_2, edx_1 = sub_4030a0(ecx_1, edx)
    arg1[8] = eax_2
    sub_41d040(eax_2)
    
    if (data_52e3e8 != 0)
        edx_1.b = 1
        (*(*arg1 + 0x68))()
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_1
        esp_1 = &esp_1[4]
    
    *esp_1
    esp_1[1]
    esp_1[2]
    return arg1
}
