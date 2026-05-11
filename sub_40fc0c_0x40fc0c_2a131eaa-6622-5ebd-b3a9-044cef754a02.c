// ============================================================
// 函数名称: sub_40fc0c
// 虚拟地址: 0x40fc0c
// WARP GUID: 2a131eaa-6622-5ebd-b3a9-044cef754a02
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40faf0, sub_40fb5c
// [被调用的父级函数]: sub_414da8
// ============================================================

char* __convention("regparm")sub_40fc0c(void* arg1)
{
    // 第一条实际指令: char* result = sub_40fb5c(arg1)
    char* result = sub_40fb5c(arg1)
    
    if (result != 0)
        return result
    
    sub_40faf0(arg1)
    noreturn
}
