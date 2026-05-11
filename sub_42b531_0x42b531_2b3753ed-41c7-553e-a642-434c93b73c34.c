// ============================================================
// 函数名称: sub_42b531
// 虚拟地址: 0x42b531
// WARP GUID: 2b3753ed-41c7-553e-a642-434c93b73c34
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4032ac
// [被调用的父级函数]: 无
// ============================================================

void __fastcallsub_42b531(int32_t arg1, char arg2, char* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    *arg3 += arg3.b
    void* entry_ebx
    *(entry_ebx + 0x56) += arg2
    
    if (arg2 == arg3[0x4c])
        return 
    
    arg3[0x4c] = arg2
    
    if (arg2 != 0)
        entry_ebx.w = 0xffef
        sub_4032ac(arg3)
}
