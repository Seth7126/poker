// ============================================================
// 函数名称: sub_436fe4
// 虚拟地址: 0x436fe4
// WARP GUID: c0a88803-5e02-5244-be99-621e9388a2e1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0, sub_415d18
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_436fe4(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp_1 = &var_8
    int32_t* ecx
    
    if (arg2.b != 0)
        void var_18
        esp_1 = &var_18
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_415d18(arg1, 0, ecx)
    arg1[0xa] = 0x10
    arg1[9] = 0x10
    (*(*arg1 + 0x34))()
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp_1
        esp_1 = &esp_1[4]
    
    *esp_1
    esp_1[1]
    return arg1
}
