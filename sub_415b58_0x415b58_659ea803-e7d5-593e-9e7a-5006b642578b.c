// ============================================================
// 函数名称: sub_415b58
// 虚拟地址: 0x415b58
// WARP GUID: 659ea803-e7d5-593e-9e7a-5006b642578b
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_415a3c, sub_4030a0, sub_403dac, sub_403428
// [被调用的父级函数]: sub_496e00, sub_51038c, sub_4a8f18, sub_496da0
// ============================================================

int32_t* __convention("regparm")sub_415b58(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4 = ebp
    int32_t var_8 = arg3
    int32_t ebx
    int32_t var_c = ebx
    int32_t esi
    int32_t var_10 = esi
    int32_t edi
    int32_t var_14 = edi
    int32_t* esp_1 = &var_14
    
    if (arg2.b != 0)
        void var_24
        esp_1 = &var_24
        arg1 = sub_4033d0(arg3, arg2)
    
    char ebx_1 = arg3.b
    var_8:3.b = arg2.b
    sub_4030a0(arg3, 0)
    void* ebp_1 = sub_415a3c()
    *(arg1 + 0xd) = ebx_1
    int32_t esi_1 = 0
    
    if (ebx_1 != 0)
        esi_1 = 4
    
    *(esp_1 - 4) = arg1
    *(esp_1 - 8) = esi_1
    *(esp_1 - 0xc) = &arg1[2]
    void* esp_5 = esp_1
    arg1[1] = sub_403dac(sub_415af0, 0, 0)
    
    if (*(ebp_1 - 1) != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_5
        esp_5 += 0x10
    
    *esp_5
    *(esp_5 + 4)
    *(esp_5 + 8)
    *(esp_5 + 0xc)
    *(esp_5 + 0x10)
    return arg1
}
