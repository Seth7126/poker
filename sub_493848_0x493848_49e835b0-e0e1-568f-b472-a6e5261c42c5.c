// ============================================================
// 函数名称: sub_493848
// 虚拟地址: 0x493848
// WARP GUID: 49e835b0-e0e1-568f-b472-a6e5261c42c5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: mciSendCommandA
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_49292c
// ============================================================

int32_t __convention("regparm")sub_493848(void* arg1)
{
    // 第一条实际指令: *(arg1 + 0x2d0) = 0x102
    *(arg1 + 0x2d0) = 0x102
    int32_t var_34 = 8
    void dwParam2
    mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x80b, 0x102, &dwParam2)
    int32_t var_38
    char eax_1 = var_38.b
    *(arg1 + 0x2cb) = eax_1
    
    if (eax_1 != 0)
        *(arg1 + 0x2ca) |= 4
    
    int32_t var_34_1 = 1
    mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x80b, *(arg1 + 0x2d0), &dwParam2)
    char eax_4 = var_38.b
    *(arg1 + 0x2ce) = eax_4
    
    if (eax_4 != 0)
        *(arg1 + 0x2ca) |= 8
    
    int32_t var_34_2 = 7
    mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x80b, *(arg1 + 0x2d0), &dwParam2)
    char eax_7 = var_38.b
    *(arg1 + 0x2cd) = eax_7
    
    if (eax_7 != 0)
        *(arg1 + 0x2ca) |= 2
    
    int32_t var_34_3 = 3
    mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x80b, *(arg1 + 0x2d0), &dwParam2)
    char eax_10 = var_38.b
    *(arg1 + 0x2cf) = eax_10
    
    if (eax_10 != 0)
        *(arg1 + 0x2ca) |= 0x10
    
    int32_t var_34_4 = 4
    mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x80b, *(arg1 + 0x2d0), &dwParam2)
    
    if (var_38 == 0x207 || var_38 == 0x208 || var_38 == 0x203 || var_38 == 0x201)
        *(arg1 + 0x2cc) = 1
    
    if (*(arg1 + 0x2cc) != 0)
        *(arg1 + 0x2ca) |= 1
    
    *(arg1 + 0x2d0) = 0x20000
    void dwParam2_1
    *(arg1 + 0x2ec) = mciSendCommandA(zx.d(*(arg1 + 0x2da)), 0x843, 0x20000, &dwParam2_1)
    void var_2c
    int32_t var_1c
    __builtin_memcpy(&var_1c, &var_2c, 0x10)
    int32_t var_14
    *(arg1 + 0x2f8) = var_14 - var_1c
    int32_t var_18
    int32_t var_10
    int32_t result = var_10 - var_18
    *(arg1 + 0x2fc) = result
    return result
}
