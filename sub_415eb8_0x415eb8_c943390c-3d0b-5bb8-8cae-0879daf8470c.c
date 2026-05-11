// ============================================================
// 函数名称: sub_415eb8
// 虚拟地址: 0x415eb8
// WARP GUID: c943390c-3d0b-5bb8-8cae-0879daf8470c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4030d0, sub_4106bc
// [被调用的父级函数]: sub_415f38, sub_415f70
// ============================================================

int32_t* __convention("regparm")sub_415eb8(void* arg1, void* arg2)
{
    // 第一条实际指令: *(arg2 + 4) = 0
    *(arg2 + 4) = 0
    sub_4106bc(*(arg1 + 0x10))
    int32_t* result = *(arg1 + 0x10)
    
    if (result[2] == 0)
        sub_4030d0(result)
        result = nullptr
        *(arg1 + 0x10) = 0
    
    return result
}
