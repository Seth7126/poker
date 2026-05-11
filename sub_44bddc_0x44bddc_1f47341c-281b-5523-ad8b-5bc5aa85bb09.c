// ============================================================
// 函数名称: sub_44bddc
// 虚拟地址: 0x44bddc
// WARP GUID: 1f47341c-281b-5523-ad8b-5bc5aa85bb09
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4033d0, sub_44c1e8, sub_42afdc, sub_44c204, sub_431b5c, sub_42affc, sub_42b904, sub_4331f0, sub_403428
// [被调用的父级函数]: 无
// ============================================================

int32_t* __convention("regparm")sub_44bddc(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    int32_t var_4 = ebx
    int32_t esi
    int32_t var_8 = esi
    int32_t* esp = &var_8
    
    if (arg2.b != 0)
        void var_18
        esp = &var_18
        int32_t ecx
        arg1 = sub_4033d0(ecx, arg2)
    
    sub_4331f0(arg1, 0)
    arg1[0x10] = 0x8eb
    sub_42afdc(arg1, 0xb9)
    sub_42affc(arg1, 0x29)
    *(arg1 + 0x207) = 2
    sub_44c1e8(arg1, 2)
    sub_44c204(arg1, 1)
    arg1[0x81].b = 0
    sub_42b904(arg1, 0x8000000f)
    *(arg1 + 0x205) = 1
    int32_t* result = sub_431b5c(arg1, 1)
    
    if (arg2.b != 0)
        sub_403428(result)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = *esp
        esp = &esp[4]
    
    *esp
    esp[1]
    return result
}
