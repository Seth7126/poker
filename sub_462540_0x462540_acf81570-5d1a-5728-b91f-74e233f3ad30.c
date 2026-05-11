// ============================================================
// 函数名称: sub_462540
// 虚拟地址: 0x462540
// WARP GUID: acf81570-5d1a-5728-b91f-74e233f3ad30
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_461ad0, sub_461c98
// [被调用的父级函数]: sub_461234
// ============================================================

int32_t __convention("regparm")sub_462540(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: void* (__convention("regparm")** eax_1)(int32_t* arg1) = (*arg1[1])()
    void* (__convention("regparm")** eax_1)(int32_t* arg1) = (*arg1[1])()
    *(arg1 + 0x141) = eax_1
    *eax_1 = sub_462320
    eax_1[1] = sub_4624bc
    eax_1[2] = sub_4624e4
    eax_1[4] = 0
    sub_461ad0(arg1)
    
    if (arg1[0x29] == 0)
        *(arg1 + 0xd9) = 0
        arg1[0x28] = 1
    else
        sub_461c98(arg1)
    
    if (*(arg1 + 0xd9) != 0)
        arg1[0x2c] = 1
    
    if (arg2 == 0)
        eax_1[5] = 0
    else if (arg1[0x2c] == 0)
        eax_1[5] = 2
    else
        eax_1[5] = 1
    
    int32_t result = 0
    eax_1[8] = 0
    eax_1[6] = 0
    
    if (arg1[0x2c] == 0)
        result = arg1[0x28]
        eax_1[7] = result
    else
        eax_1[7] = arg1[0x28] * 2
    
    return result
}
