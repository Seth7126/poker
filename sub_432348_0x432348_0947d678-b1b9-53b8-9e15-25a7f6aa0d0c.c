// ============================================================
// 函数名称: sub_432348
// 虚拟地址: 0x432348
// WARP GUID: 0947d678-b1b9-53b8-9e15-25a7f6aa0d0c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403248, sub_42d2c0
// [被调用的父级函数]: sub_424fbc
// ============================================================

int32_t __convention("regparm")sub_432348(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: void* edi_1 = sub_42d2c0(arg1, arg2, arg3)
    void* edi_1 = sub_42d2c0(arg1, arg2, arg3)
    int32_t result = sub_403248(arg2, &data_436278)
    
    if (result.b != 0 && (arg3.b == 0 || *(edi_1 + 0x150) == 0))
        result = arg2[0x17]
        *(edi_1 + 0x150) = result
    
    return result
}
