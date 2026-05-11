// ============================================================
// 函数名称: sub_446ad8
// 虚拟地址: 0x446ad8
// WARP GUID: 8501a4b1-db76-5a4c-8425-1075ea475c49
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_443be4, sub_44399c, sub_403428, sub_441d68, sub_430304
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_446ad8(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t* esp_1 = &var_10
    
    if (arg2.b != 0)
        void var_20
        esp_1 = &var_20
        arg1 = sub_4033d0(ecx, arg2)
    
    var_8:3.b = arg2.b
    *(esp_1 - 4) = 0
    (*(*arg1 + 0xcc))()
    void* esp_3 = esp_1
    sub_441d68(arg1, 0)
    sub_44399c(arg1, 5)
    int32_t edx_2
    edx_2.b = 1
    void* ebp_1 = sub_430304(arg1, edx_2)
    sub_443be4(arg1, 3)
    
    if (*(ebp_1 - 1) != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_3
        esp_3 += 0x10
    
    *esp_3
    *(esp_3 + 4)
    *(esp_3 + 8)
    *(esp_3 + 0xc)
    return arg1
}
