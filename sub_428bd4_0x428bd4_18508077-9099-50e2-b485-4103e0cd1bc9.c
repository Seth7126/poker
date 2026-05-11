// ============================================================
// 函数名称: sub_428bd4
// 虚拟地址: 0x428bd4
// WARP GUID: 18508077-9099-50e2-b485-4103e0cd1bc9
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_40c024, sub_403e4c, sub_404280
// [被调用的父级函数]: sub_445458, sub_43d934, sub_4499c8
// ============================================================

char** __convention("regparm")sub_428bd4(char* arg1, char** arg2)
{
    // 第一条实际指令: void* eax = sub_40c024(0x428c14, arg1)
    void* eax = sub_40c024(0x428c14, arg1)
    
    if (eax != 0)
        return sub_404280(0x7fffffff, eax + 1, arg1, arg2)
    
    return sub_403e4c(arg2, arg1)
}
