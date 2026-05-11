// ============================================================
// 函数名称: sub_410030
// 虚拟地址: 0x410030
// WARP GUID: 27bf6cfa-a8fb-5dd8-b36c-c4adb50466bb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4089dc
// [被调用的父级函数]: sub_418654, sub_41844c, sub_428b80
// ============================================================

int32_t __fastcallsub_410030(void* arg1, int32_t* arg2, void* arg3 @ eax, int32_t arg4)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    
    if (arg4 s>= 0)
        int32_t i_1 = arg4 + 1
        int32_t* ebx_1 = arg1 + 4
        int32_t i
        
        do
            if (sub_4089dc(*ebx_1, arg3) != 0)
                *arg2 = ebx_1[-1]
                return 1
            
            ebx_1 = &ebx_1[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return 0
}
