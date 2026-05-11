// ============================================================
// 函数名称: sub_4198a1
// 虚拟地址: 0x4198a1
// WARP GUID: c2e6e638-b0af-534f-957e-55a943010f98
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: GetWindowOrgEx
// [内部子函数调用]: sub_419b40
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_4198a1(int32_t arg1, char arg2, char* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: *arg3 += arg3.b
    *arg3 += arg3.b
    void* entry_ebx
    *(entry_ebx + 0x56) += arg2
    int32_t result = 0
    
    if ((arg3[0x54] & 0x80) != 0)
        POINT lppoint
        GetWindowOrgEx(sub_419b40(arg3), &lppoint)
        
        if (lppoint.x != 0)
            result.b = 1
    
    return result
}
