// ============================================================
// 函数名称: sub_45ac8c
// 虚拟地址: 0x45ac8c
// WARP GUID: d62234bc-4f93-51ba-8890-c7e97d009c36
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_45a2fc
// [被调用的父级函数]: sub_45acb4
// ============================================================

int32_t __convention("regparm")sub_45ac8c(int32_t* arg1)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x1be)
    void* ebx = *(arg1 + 0x1be)
    arg1[0x21] = *(ebx + 0x10)
    int32_t result = sub_45a2fc(arg1, *(ebx + 0x14))
    *(ebx + 0x1c) = 1
    return result
}
