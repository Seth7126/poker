// ============================================================
// 函数名称: sub_442958
// 虚拟地址: 0x442958
// WARP GUID: 41b227bf-ee87-5224-ad8b-a30314e37223
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac, sub_4448d8, sub_42d480
// [被调用的父级函数]: sub_446c48
// ============================================================

char** __convention("regparm")sub_442958(int32_t* arg1)
{
    // 第一条实际指令: sub_42d480(arg1)
    sub_42d480(arg1)
    char** result = arg1[0x82]
    
    if (result != 0)
        char** result_1 = result
        arg1[0x82] = 0
        int32_t ebx
        ebx.w = 0xffbc
        result = sub_4032ac(result_1)
        
        if (result.b != 0)
            return sub_4448d8(arg1, result_1)
    
    return result
}
