// ============================================================
// 函数名称: sub_467190
// 虚拟地址: 0x467190
// WARP GUID: 677a5566-d729-5384-905d-933bb4c78ec1
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: RegQueryValueExA
// [内部子函数调用]: sub_40423c, sub_466f7c, sub_402d00
// [被调用的父级函数]: sub_4671e0
// ============================================================

int32_t __convention("regparm")sub_467190(void* arg1, int32_t arg2, enum REG_VALUE_TYPE arg3)
{
    // 第一条实际指令: enum REG_VALUE_TYPE type = arg3
    enum REG_VALUE_TYPE type = arg3
    sub_402d00(arg3, 8, 0)
    PSTR lpValueName = sub_40423c(arg2)
    int32_t result
    result.b = RegQueryValueExA(*(arg1 + 4), lpValueName, nullptr, &type, nullptr, arg3 + 4) == NO_ERROR
    *arg3 = sub_466f7c(type)
    return result
}
