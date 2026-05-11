// ============================================================
// 函数名称: sub_496100
// 虚拟地址: 0x496100
// WARP GUID: 5f6351d2-6bec-5cc4-9064-ec50104d360a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: sub_49452c
// ============================================================

void __convention("regparm")sub_496100(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = arg1[1]
    int32_t ecx = arg1[1]
    
    if (ecx == 0xffffffff || ecx != arg2)
        return 
    
    ecx.b = 7
    int32_t ebx
    ebx.w = 0xffff
    sub_4032ac(arg1, arg1, ecx)
}
