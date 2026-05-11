// ============================================================
// 函数名称: sub_408e80
// 虚拟地址: 0x408e80
// WARP GUID: 413dc377-4fd5-58ac-90f4-dd430f3f2261
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40880c, sub_402d5c
// [被调用的父级函数]: sub_510e64, sub_50f478, sub_511e1c, sub_468e30, sub_4ee134, sub_4ed4d4, sub_50a360, sub_4a2b90, sub_46fed4, sub_4ecdcc, sub_4af7a3, sub_49e3f8, sub_4dbf70, sub_471144, sub_469254, sub_484e24, sub_50af4c, sub_451e20, sub_468a6c, sub_51038c, sub_4e649b, sub_4ed7a0, sub_4e6659, sub_50b624, sub_4af7b0, sub_49c144, sub_46de48, sub_4981b4, sub_50f7b8, sub_50b1ac, sub_4ed284, sub_40e008, sub_4ed638, sub_51a454, sub_46f698, sub_4a1b34, sub_488509, sub_4ad8c0, sub_46e24c, sub_51d840
// ============================================================

int32_t __convention("regparm")sub_408e80(char* arg1)
{
    // 第一条实际指令: int32_t var_14
    int32_t var_14
    int32_t result = sub_402d5c(arg1, &var_14)
    
    if (var_14 == 0)
        return result
    
    char* var_10 = arg1
    char var_c = 0xb
    sub_40880c(data_530310, &var_10, 0)
    noreturn
}
