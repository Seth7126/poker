// ============================================================
// 函数名称: sub_460b5c
// 虚拟地址: 0x460b5c
// WARP GUID: e4027148-ee99-5667-9a0a-7fad4e6f5fdf
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_460be4, sub_460b98
// ============================================================

void __fastcallsub_460b5c(int32_t arg1, int32_t arg2, int32_t* arg3 @ eax, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t ebx = 0
    int32_t ebx = 0
    
    if (arg2 s<= 0)
        return 
    
    do
        *arg3 = 1
        arg3[1] = ebx
        arg3[5] = arg1
        arg3[6] = arg6
        ebx += 1
        arg3[7] = arg5
        arg3[8] = arg4
        arg3 = &arg3[9]
    while (arg2 s> ebx)
}
