// ============================================================
// 函数名称: sub_403ee0
// 虚拟地址: 0x403ee0
// WARP GUID: 280be8f8-d175-52fa-9376-ee0bc167cbaf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403ebc, sub_403df8, sub_402980
// [被调用的父级函数]: sub_4029c0, sub_412000, sub_40ac70, sub_411d08, sub_402a38, sub_409388, sub_40401c, sub_415168, sub_408a34, sub_42429c, sub_404280, sub_446dd8, sub_49fdd0, sub_4247f8, sub_404028, sub_40ac00, sub_408a00, sub_409af4, sub_408bec, sub_4131b4, sub_4121a4, sub_403fb0, sub_40acbc, sub_411998, sub_448eec, sub_467208, sub_40a218, sub_403fa0, sub_409bbc, sub_404ba0, sub_41316c, sub_4a87f8, sub_42b778, sub_408cec, sub_414330, sub_446b40, sub_425374, sub_405ae8, sub_4a8b38, sub_493b3c, sub_403f10, sub_41512c
// ============================================================

char** __convention("regparm")sub_403ee0(char** arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: char* eax_1 = sub_403ebc(arg3)
    char* eax_1 = sub_403ebc(arg3)
    
    if (arg2 != 0)
        sub_402980(arg2, eax_1, arg3)
    
    sub_403df8(arg1)
    *arg1 = eax_1
    return arg1
}
