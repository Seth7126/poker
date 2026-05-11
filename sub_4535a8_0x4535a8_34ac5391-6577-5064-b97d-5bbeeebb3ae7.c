// ============================================================
// 函数名称: sub_4535a8
// 虚拟地址: 0x4535a8
// WARP GUID: 34ac5391-6577-5064-b97d-5bbeeebb3ae7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_4033d0, sub_41b0b8, sub_45455c
// [被调用的父级函数]: sub_4da034, sub_4da10c, sub_52c7c8, sub_4d9a28
// ============================================================

int32_t* __convention("regparm")sub_4535a8(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t edi
    int32_t var_c = edi
    int32_t* esp = &var_c
    
    if (arg2.b != 0)
        void var_1c
        esp = &var_1c
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_41b0b8(arg1, 0)
    sub_45455c(arg1)
    *(arg1 + 0x37) = data_52eb78
    *(arg1 + 0x35) = data_52eb79
    *(arg1 + 0x3a) = data_52eb7a
    *(arg1 + 0x36) = data_52eb7b
    arg1[0xe].b = data_52eb7c
    *(arg1 + 0x39) = data_52eb7d
    *(arg1 + 0x3b) = data_52eb7e
    arg1[0xd].b = data_52eb7f
    
    if (arg2.b != 0)
        sub_403428(arg1)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    esp[2]
    return arg1
}
