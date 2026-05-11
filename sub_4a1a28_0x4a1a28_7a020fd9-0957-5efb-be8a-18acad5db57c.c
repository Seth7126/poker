// ============================================================
// 函数名称: sub_4a1a28
// 虚拟地址: 0x4a1a28
// WARP GUID: 7a020fd9-0957-5efb-be8a-18acad5db57c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_410c00, sub_403e4c, sub_403248, sub_403260
// [被调用的父级函数]: sub_4a256b
// ============================================================

int32_t __convention("regparm")sub_4a1a28(void** arg1, int32_t* arg2)
{
    // 第一条实际指令: if (sub_403248(arg2, 0x4a10a8) == 0)
    if (sub_403248(arg2, 0x4a10a8) == 0)
        sub_410c00(arg1, arg2)
        noreturn
    
    sub_403260(arg2, 0x4a10a8)
    arg1[2]
    (*(*arg2[2] + 8))()
    sub_403e4c(&arg2[4], arg1[4])
    sub_403e4c(&arg2[5], arg1[5])
    arg2[6] = arg1[6]
    arg2[7] = arg1[7]
    arg2[8] = arg1[8]
    sub_403e4c(&arg2[9], arg1[9])
    sub_403e4c(&arg2[0xa], arg1[0xa])
    arg2[0xc] = arg1[0xc]
    arg2[0xd] = arg1[0xd]
    arg2[0xe] = arg1[0xe]
    arg2[0xf] = arg1[0xf]
    arg2[0x10] = arg1[0x10]
    int32_t result = arg1[0x11]
    arg2[0x11] = result
    return result
}
