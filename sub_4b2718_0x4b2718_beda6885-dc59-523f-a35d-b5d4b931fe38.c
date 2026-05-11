// ============================================================
// 函数名称: sub_4b2718
// 虚拟地址: 0x4b2718
// WARP GUID: beda6885-dc59-523f-a35d-b5d4b931fe38
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403428, sub_431afc, sub_42affc, sub_42afdc
// [被调用的父级函数]: sub_4b2e4c, sub_4b2693
// ============================================================

int32_t* __convention("regparm")sub_4b2718(int32_t arg1, int32_t arg2, char arg3, uint16_t* arg4 @ esi)
{
    // 第一条实际指令: int16_t cs
    int16_t cs
    uint32_t var_4 = zx.d(cs)
    uint32_t* esp = &var_4
    void* entry_ebx
    int32_t temp2 = *(entry_ebx + (arg1 << 1) + 0x6f)
    bool c
    *(entry_ebx + (arg1 << 1) + 0x6f) = adc.d(temp2, arg2, c)
    bool c_1 = adc.d(temp2, arg2, c) u< temp2 || (c && adc.d(temp2, arg2, c) == temp2)
    int32_t eflags
    int32_t* result = __outsb(arg2.w, *arg4, arg4, eflags)
    
    if (adc.d(temp2, arg2, c) != 0 && not(c_1))
        if (c_1)
            undefined
        
        jump(sub_4b2693+0x8f)
    
    *(entry_ebx + 0x42e8f0c4) |= arg1.b
    *(entry_ebx + 0x33f08bda) -= 1
    *(entry_ebx - 0x4ea6173a) = ror.b(*(entry_ebx - 0x4ea6173a), arg3)
    sub_42afdc(result, 0x96)
    sub_42affc(result, 0x2d)
    sub_431afc(result, 1)
    result[0x81] = 0
    result[0x82] = 0xa
    result[0x7d] = 1
    result[0x7e] = 2
    result[0x83] = 1
    result[0x7f] = 0x14
    *(result + 0x1f1) = 0
    *(result + 0x1f2) = 1
    result[0x7c].b = 0
    result[0x10] &= 0xffffff7f
    result[0x80].b = 1
    
    if (entry_ebx.b != 0)
        sub_403428(result)
        TEB* fsbase
        fsbase->NtTib.ExceptionList = var_4
        void arg_c
        esp = &arg_c
    
    *esp
    esp[1]
    return result
}
