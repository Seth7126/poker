// ============================================================
// 函数名称: sub_4b47c8
// 虚拟地址: 0x4b47c8
// WARP GUID: c9dd7491-6452-5d04-9adb-a6aad97a32bb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4258dc, sub_425c10, sub_4033d0, sub_42afdc, sub_4b5228, sub_425c74, sub_403e4c, sub_425c88, sub_403428, sub_4028f0
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_4b47c8(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp_1 = &var_8
    
    if (arg2.b != 0)
        void var_18
        esp_1 = &var_18
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_4258dc(arg1, 0)
    sub_42afdc(arg1, 0x91)
    arg1[0x90].b = 0x40
    sub_4028f0(0, &arg1[0x8e])
    sub_403e4c(&arg1[0x8f], sub_4b486f+5)
    sub_425c10(arg1, 0)
    arg1[0x9a] = 0xffffffff
    (*(*arg1 + 0xbc))()
    sub_425c74(arg1, 1)
    sub_425c88(arg1, 1)
    sub_4b5228(arg1)
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_1
        esp_1 = &esp_1[4]
    
    *esp_1
    esp_1[1]
    return arg1
}
